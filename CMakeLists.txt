cmake_minimum_required(VERSION 3.4...3.18)
project(for_loop_binder)
find_package(hpx REQUIRED)
add_subdirectory(pybind11 REQUiRED)
pybind11_add_module(for_loop_binder src/bindings/for_loop_binder.cpp)

# EXAMPLE_VERSION_INFO is defined by setup.py and passed into the C++ code as a
# define (VERSION_INFO) here.
# target_compile_definitions(cmake_example
#                            PRIVATE VERSION_INFO=${EXAMPLE_VERSION_INFO})
target_link_libraries(for_loop_binder PRIVATE hpx::hpx)