cmake_minimum_required(VERSION 3.10)

project(My_OpenGL_Portfolio)
add_compile_options(-O3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib)

# Google Test를 사용하여 테스트 활성화
enable_testing()
add_subdirectory(test)