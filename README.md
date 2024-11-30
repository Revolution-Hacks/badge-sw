# Revolution Badge SW
This is the core software for a Revolution Badge concept.

## What's done
- Basic Launcher UI kinda
- Cool Revolution Logo on start up
- EInk initialisationm w/Pico Graphics

## Compatibility
Should be compatible with any RP2040 based Pimoroni Badger board

## Building
First, open the project using VSCode with the Raspberry Pi Pico extension installed
2. Clone the submodules (`git submodule update --init`)
3. Build Jerryscript (`tools/jerryscript-build.sh`) MUST BE RAN ON LINUX/MACOS/THROUGH WSL
4. Build using the extension
5. Flash (put board into bootsel and then copy the uf2 from the build/ folder to it)
