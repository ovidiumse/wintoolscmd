# wintoolscmd
Build tools for windows command-line test application

### Prerequisites
* Install git
* Install cmake
* Install ninja
* Install Visual Studio with build tools

### Build
* Create a build directoryGenerate Ninja toolchain

`mkdir build`

* Configure build environment for building with Visual Studio compiler

`C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvarsall.bat`

* Generate Ninja toolchain
```
cd build
cmake -G "Ninja" .. -DCMAKE_CXX_FLAGS=/D_SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING
```

> The `D_SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING` is required to avoid the deprecation warnings introduced starting with the Visual Studio 2017 compilers.

#### Build application and unit-tests
`ninja`

### Run unit-tests
`ninja test`

### References
1. [Integrate GTEST into an existing cmake project](https://github.com/ttroy50/cmake-examples/tree/master/05-unit-testing/google-test-download)
