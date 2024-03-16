# TP1

## Configuration
```console
mkdir build_debug
cd build_debug
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_PREFIX_PATH=/opt/alg/qt-5.15.14-arm64-debug -GNinja ..
cmake --build .
```

## Run
```console
ctest => one test successful
.\bin\Debug\TP1.exe => UI shows
```
