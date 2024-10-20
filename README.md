# CPPLearn

> although it says cpp, I also learn C b4 any CPP

## Scratchpad

1. lulu: CLI helper to bootstrap new projects in this dir

### lulu

> inspired by Laravel artisan

Functions:

- helps me bootstraps a new project in this dir
- properly modifies CMakeLists
- adds testing folder and target for gtest
- runs `cmake -S . -B build` cmd to get `compiler-commands.json` for the nvim
- create optional bin

Roadmap

- [ ] write config parser (config format: `KEY VALUE`)
- [ ] create new files
- [ ] modify CMakeLists.txt
- [ ] build Makefiles
- [ ] optional bin file as well

- create new files
  - create new lib folder [ `root/project-name/target-name/`]
  - lib \.c[pp] & \.h
  - | [ `root/project-name/target-name/target-name.h`]
  - | [`root/project-name/target-name/target-name.c` ]
  - test \.cpp (becuz of gtest)
  - | [ `root/project-name/tests/target-name_test.cpp`]
- modify CMakeLists.txt
  - lib main [ `add_subdirectory(target-name)` ]
  - the lib
  - | [ `add_library(lulu lulu.c)` ]
  - | [ `target_link_libraries(lulu PUBLIC cxx_setup)` ]
  - test (see below)
- build Makefiles

test::CMakeLists

```cmake
    add_executable(target-name_test target-name_test.cpp)
    target_link_libraries(target-name_test PRIVATE GTest::gtest_main target-name)

    # after gtest declaration
    gtest_discover_tests(target-name_test)
```

build Makefiles cmds

```bash
cmake -S . -B build
cmake --build build -j8
GTEST_COLOR=1 ctest --output-on-failure --test-dir build/
```
