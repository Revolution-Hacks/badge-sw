#pragma once
#include "lfs.h"

extern struct lfs_config fs_cfg;

// FS ops
int lfs_flash_read(const struct lfs_config *c, lfs_block_t block, lfs_off_t offset, void *buffer, lfs_size_t size);
int lfs_flash_prog(const struct lfs_config *c, lfs_block_t block, lfs_off_t offset, const void *buffer, lfs_size_t size);
int lfs_flash_erase(const struct lfs_config *c, lfs_block_t block);
int lfs_flash_sync(const struct lfs_config *c);