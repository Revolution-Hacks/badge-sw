#include "hardware/flash.h"
#include <stdio.h>
#include "pico/stdlib.h"
#include "lfs.h"

#define LFS_FLASH_OFFSET (0x100000) // Start of the LittleFS partition
#define LFS_FLASH_SIZE   (1024 * 1024) // Size of the LittleFS partition
#define lFS_YES_TRACE 1

// Read/write buffer sizes (adjust as necessary)
uint8_t read_buffer[256];
uint8_t write_buffer[256];
uint8_t lookahead_buffer[16];

int lfs_flash_read(const struct lfs_config *c, lfs_block_t block, lfs_off_t offset, void *buffer, lfs_size_t size) {
    // Calculate the absolute flash address
    uint32_t addr = XIP_BASE + LFS_FLASH_OFFSET + (block * c->block_size) + offset;
    printf("Reading from %d\n", addr);
    // Copy data directly from flash memory
    memcpy(buffer, (const void *)addr, size);

    return 0; // Success
}

int lfs_flash_prog(const struct lfs_config *c, lfs_block_t block, lfs_off_t offset, const void *buffer, lfs_size_t size) {
    // Calculate the absolute flash offset
    uint32_t flash_offset = LFS_FLASH_OFFSET + (block * c->block_size) + offset;

    // Ensure alignment to RP2040's flash program page size (256 bytes)
    if ((flash_offset % FLASH_PAGE_SIZE) != 0 || (size % FLASH_PAGE_SIZE) != 0) {
        return -1; // Alignment error
        printf("Alignment error\n");
    }

    // Program the flash
    flash_range_program(flash_offset, buffer, size);

    return 0; // Success
}

int lfs_flash_erase(const struct lfs_config *c, lfs_block_t block) {
    // Calculate the absolute flash offset
    uint32_t flash_offset = LFS_FLASH_OFFSET + (block * c->block_size);

    // Ensure block size matches RP2040 flash sector size (4KB)
    if (c->block_size != FLASH_SECTOR_SIZE) {
        return -1; // Invalid block size
        printf("Invalid block size\n");
    }

    // Erase the flash sector
    flash_range_erase(flash_offset, c->block_size);

    return 0; // Success
}

int lfs_flash_sync(const struct lfs_config *c) {
    return 0; // No operation required
}

// LittleFS configuration
struct lfs_config fs_cfg = {
    .read  = lfs_flash_read,
    .prog  = lfs_flash_prog,
    .erase = lfs_flash_erase,
    .sync  = lfs_flash_sync,

    // block device configuration
    .read_size = 16,
    .prog_size = 16,
    .block_size = 4096,
    .block_count = 128,
    .cache_size = 16,
    .lookahead_size = 16,
    .block_cycles = 500,
};