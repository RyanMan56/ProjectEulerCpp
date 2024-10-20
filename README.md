# Project Euler Cpp

## How to run

1. Create a `build` directory, e.g. `mkdir build`
2. Generate a native build system, `cd build && cmake ..`
3. Compile/link the project, `cmake --build .`
4. Run the project `./bin/ProjectEulerCpp` (assuming you're on mac/linux. You'll probably just want to open and run the project in VS if you're on windows)

There are a couple of handy scripts for mac/linux (I haven't created these for windows yet). Make sure to cd into the scripts directory and run them from there:

- `scripts/build.sh` - cds into the build directory, generates a native build system, compiles/links the project, and runs the executable
- `scripts/clean_build.sh` - removes the `build` directory and runs `build.sh`

### Note

When adding a new .cpp file make sure to run `cmake ..` e.g. `cmake .. && cmake --build . && ./bin/ProjectEulerCpp` otherwise the change to the sources won't get picked up by CMake
