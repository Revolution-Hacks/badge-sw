import re
import sys
from pathlib import Path


def parse_bdf(bdf_file):
    """Parses a BDF file and extracts glyph data."""
    with open(bdf_file, "r") as f:
        lines = f.readlines()

    # Initialize variables
    glyphs = {}
    glyph = None
    collecting_bitmap = False

    for line in lines:
        line = line.strip()

        # Start of a character
        if line.startswith("STARTCHAR"):
            glyph = {}
            glyph["name"] = line.split()[1]

        # Encoding of the character
        elif line.startswith("ENCODING"):
            glyph["code"] = int(line.split()[1])

        # Bitmap section start
        elif line.startswith("BITMAP"):
            glyph["bitmap"] = []
            collecting_bitmap = True

        # Bitmap section end
        elif line.startswith("ENDCHAR"):
            collecting_bitmap = False
            glyphs[glyph["code"]] = glyph

        # Collect bitmap data
        elif collecting_bitmap:
            glyph["bitmap"].append(line)

    return glyphs


def calculate_width_from_bitmap(bitmap):
    """
    Dynamically calculate the width of a glyph based on the active columns in its bitmap.
    """
    if not bitmap:
        return 0

    min_col = float("inf")
    max_col = 0

    for row in bitmap:
        row_data = int(row, 16)  # Convert row from hex to binary
        if row_data == 0:
            continue  # Skip empty rows

        # Find the leftmost and rightmost active columns
        for col in range(len(row) * 4):  # Each hex digit represents 4 bits
            if row_data & (1 << col):
                min_col = min(min_col, col)
                max_col = max(max_col, col)

    if min_col == float("inf"):  # No active columns
        return 0

    # Width is the number of active columns
    return max_col - min_col + 1


def trim_bitmap(bitmap):
    """
    Remove empty rows from the top and bottom of the glyph's bitmap.
    """
    # Remove empty rows at the top
    while bitmap and int(bitmap[0], 16) == 0:
        bitmap.pop(0)

    # Remove empty rows at the bottom
    while bitmap and int(bitmap[-1], 16) == 0:
        bitmap.pop()

    return bitmap


def calculate_width_and_trim(bitmap):
    """
    Dynamically calculate the actual width of a glyph and trim unused columns.
    """
    if not bitmap:
        return [], 0

    min_col = float("inf")
    max_col = 0

    trimmed_bitmap = []

    for row in bitmap:
        row_data = int(row, 16)  # Convert row from hex to binary

        if row_data == 0:
            trimmed_bitmap.append("0")
            continue  # Skip empty rows but preserve alignment

        # Find the leftmost and rightmost active columns
        for col in range(8):  # Assume 8-bit wide rows
            if row_data & (1 << col):
                min_col = min(min_col, col)
                max_col = max(max_col, col)

        trimmed_bitmap.append(row)

    if min_col == float("inf"):  # No active columns
        return [], 0

    # Trim columns and calculate actual width
    actual_width = max_col - min_col + 1
    trimmed_bitmap = [
        hex((int(row, 16) >> min_col) & ((1 << actual_width) - 1)) for row in trimmed_bitmap
    ]

    return trimmed_bitmap, actual_width


def align_bitmap_to_height_and_width(trimmed_bitmap, actual_width, font_height, max_width):
    """
    Align the glyph bitmap to the device's expected height and width.
    """
    # Pad or truncate each row to max_width
    aligned_bitmap = []
    for row in trimmed_bitmap:
        row_data = int(row, 16) if row else 0
        # Truncate or pad each row to max_width bits
        row_data &= (1 << max_width) - 1  # Truncate to max_width
        aligned_bitmap.append(row_data)

    # Ensure the bitmap matches the font height by adding empty rows if necessary
    while len(aligned_bitmap) < font_height:
        aligned_bitmap.append(0)

    return aligned_bitmap


def generate_pico_font(glyphs, font_height, max_width):
    """
    Generate the PicoGraphics font format from parsed BDF glyphs.
    Dynamically calculates widths and aligns bitmaps to the maximum width and font height.
    """
    widths = []
    data = []

    for code in range(32, 127):  # Standard ASCII range
        glyph = glyphs.get(code)
        if glyph:
            bitmap = glyph["bitmap"]

            # Trim empty rows and calculate actual width
            bitmap = trim_bitmap(bitmap)
            trimmed_bitmap, actual_width = calculate_width_and_trim(bitmap)
            widths.append(actual_width)

            # Align the bitmap to the font height and max width
            aligned_bitmap = align_bitmap_to_height_and_width(
                trimmed_bitmap, actual_width, font_height, max_width
            )
            data.extend(aligned_bitmap)
        else:
            # Missing character
            widths.append(0)
            data.extend([0] * font_height)

    return widths, data

def write_pico_font(output_file, widths, data, font_height, max_width):
    """Writes the generated PicoGraphics font to a file."""
    with open(output_file, "w") as f:
        f.write("#pragma once\n\n")
        f.write('#include "bitmap_fonts.hpp"\n\n')
        f.write("const bitmap::font_t font8 {\n")
        f.write(f"  .height = {font_height},\n")
        f.write(f"  .max_width = {max_width},\n")

        # Write widths
        f.write("  .widths = {\n")
        for i, width in enumerate(widths):
            if i % 16 == 0:
                f.write("    ")
            f.write(f"{width},")
            if (i + 1) % 16 == 0 or i == len(widths) - 1:
                f.write("\n")
        f.write("  },\n")

        # Write data
        f.write("  .data = {\n")
        for i, value in enumerate(data):
            if i % 16 == 0:
                f.write("    ")
            f.write(f"0x{value:02X},")
            if (i + 1) % 8 == 0 or i == len(data) - 1:
                f.write("\n")
        f.write("  }\n")
        f.write("};\n")


if __name__ == "__main__":
    if len(sys.argv) < 3:
        print("Usage: python bdf_to_picographics.py <input.bdf> <output.hpp>")
        sys.exit(1)

    input_file = sys.argv[1]
    output_file = sys.argv[2]

    # Parse the BDF file
    glyphs = parse_bdf(input_file)

    # Determine font properties
    font_height = 16  # Change as necessary
    max_width = max(len(g["bitmap"][0]) // 2 for g in glyphs.values())

    # Generate PicoGraphics font data
    widths, data = generate_pico_font(glyphs, font_height, 16)

    # Write the PicoGraphics font file
    write_pico_font(output_file, widths, data, font_height, max_width)

    print(f"Font successfully written to {output_file}")
