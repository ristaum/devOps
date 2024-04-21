cmake_minimum_required(VERSION 3.22)

project(cmakeTut VERSION 1.0.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_TESTING "Enable a Unit Testing Build" OFF)

option(ENABLE_WARNINGS "Enable to add warnings to a target." ON)
option(ENABLE_WARNINGS_AS_ERRORS "Enable to treat warnings as errors." OFF)

set(EXECUTABLE_NAME ${PROJECT_NAME}.out)
set(LIBRARY_NAME myLib)

set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

if(ENABLE_WARNINGS)
    include(Warnings)
endif()

include(CPM)

cpmaddpackage("gh:nlohmann/json#v3.11.3")
cpmaddpackage("gh:catchorg/Catch2#v3.5.4")

add_subdirectory(src)
if (NOT ENABLE_TESTING)
    add_subdirectory(app)
else()
    add_subdirectory(tests)
endif()