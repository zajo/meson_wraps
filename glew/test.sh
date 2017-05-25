sh ./clean.sh
meson$1 build
cd build
ninja test
