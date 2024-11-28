from PIL import Image
import sys
import os

def convert_to_monochrome(input_file, output_file, width, height):
    try:
        # Open the image
        img = Image.open(input_file)
        img = img.resize((width, height), Image.Resampling.BOX)
        thresh = 200
        fn = lambda x : 255 if x > thresh else 0
        img = img.convert('L').point(fn, mode='1')
        img.save("preview.png")
        # Create a byte array to store the image data
        bytes_per_row = (width + 7) // 8  # Calculate bytes per row (1 bit per pixel, rounded up)
        bitmap_data = bytearray(bytes_per_row * height)


        # Populate the byte array
        for y in range(height):
            for x in range(width):
                # Get pixel value (0 = black, 255 = white)
                pixel = img.getpixel((x, y))
                # If pixel is black (0), set the corresponding bit
                print(pixel, end="")
                if pixel == 0:
                    byte_index = y * bytes_per_row + (x // 8)
                    bit_index = 7 - (x % 8)
                    bitmap_data[byte_index] |= (1 << bit_index)

        # Write the data to a C header file
        with open(output_file, "w") as f:
            f.write(f"#ifndef IMAGE_DATA_H\n#define IMAGE_DATA_H\n\n")
            f.write(f"// Monochrome image {width}x{height}\n")
            f.write(f"const uint8_t image_data[{len(bitmap_data)}] = {{\n")
            for i, byte in enumerate(bitmap_data):
                f.write(f"0x{byte:02X}, ")
                if (i + 1) % 12 == 0:  # Format 12 bytes per line
                    f.write("\n")
            f.write(f"\n}};\n\n")
            f.write(f"#endif // IMAGE_DATA_H\n")

        print(f"Image successfully converted and saved to {output_file}")

    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    if len(sys.argv) != 5:
        print("Usage: python convert_to_monochrome.py <input_file> <output_file> <width> <height>")
        sys.exit(1)

    input_file = sys.argv[1]
    output_file = sys.argv[2]
    width = int(sys.argv[3])
    height = int(sys.argv[4])

    convert_to_monochrome(input_file, output_file, width, height)