# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.0)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================

set(PICO_BOARD pico CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

# Pull in Pimoroni Pico SDK
set(PIMORONI_PICO_PATH "../external/pimoroni-pico")
include(pimoroni_pico_import.cmake)

project(badge-sw C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Pimoroni library imports
include(libraries/hershey_fonts/hershey_fonts)
include(libraries/bitmap_fonts/bitmap_fonts)
include(libraries/pico_graphics/pico_graphics)
include(common/pimoroni_bus)
include(drivers/uc8151/uc8151)

# Add executable. Default name is the project name, version 0.1

add_executable(badge-sw src/main.cpp )

pico_set_program_name(badge-sw "revolution-badge")
pico_set_program_version(badge-sw "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(badge-sw 0)
pico_enable_stdio_usb(badge-sw 1)

# Add the standard library to the build
target_link_libraries(badge-sw
        pico_stdlib
    )

# Add the standard include files to the build
target_include_directories(badge-sw PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
  jerryscript_install/include
)

target_sources(badge-sw PRIVATE
    src/main.cpp
    src/launcher.cpp
    src/lib/display.cpp
    src/assets/Revolution-logo.h
    src/assets/DM-SemiBold-75.hpp
)

# Add any user requested libraries
target_link_libraries(badge-sw 
        hardware_spi
        uc8151
        pico_graphics
#        "${CMAKE_CURRENT_SOURCE_DIR}/jerryscript_install/lib/libjerry-core.a"
#        "${CMAKE_CURRENT_SOURCE_DIR}/jerryscript_install/lib/libjerry-ext.a"
#        "${CMAKE_CURRENT_SOURCE_DIR}/jerryscript_install/lib/libjerry-port.a"
    )


pico_add_extra_outputs(badge-sw)

