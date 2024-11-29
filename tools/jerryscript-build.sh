rm -rf jerryscript_*

# Run Initial build
python3 external/jerryscript/tools/build.py \
    --builddir=$(pwd)/jerryscript_build \
    --cmake-param="-DCMAKE_INSTALL_PREFIX=$(pwd)/jerryscript_install/" \
    --lto=OFF \
# Run build
make -C jerryscript_build install