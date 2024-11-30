export CC=arm-none-eabi-gcc
export CMAKE_ASM_COMPILER=arm-none-eabi-gcc
export CMAKE_C_COMPILER=arm-none-eabi-gcc
export CMAKE_CXX_COMPILER=arm-none-eabi-g++
export CMAKE_LINKER=arm-none-eabi-ld
export CMAKE_OBJCOPY=arm-none-eabi-objcopy


  # --debug \
python3 external/jerryscript/tools/build.py \
  --toolchain=$(pwd)/external/jerryscript/cmake/toolchain-pico.cmake \
  --builddir=$(pwd)/jerryscript_build \
  --cmake-param="-DCMAKE_INSTALL_PREFIX=$(pwd)/jerryscript_install/" \
  --mem-heap=190 \
  --clean \
  --lto=OFF \
  --error-messages=ON \
  --mem-stats=ON \
  --line-info=ON \
  --jerry-cmdline=OFF
make -C $(pwd)/jerryscript_build install\
