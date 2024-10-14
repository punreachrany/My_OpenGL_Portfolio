cmake_minimum_required(VERSION 3.10)
project(My_OpenGL_Portfolio)

# Include directories
include_directories(
        include
        /opt/homebrew/opt/glfw/include   # GLFW headers
        ${CMAKE_SOURCE_DIR}/include      # GLAD headers
        /opt/homebrew/include/GL         # FreeGLUT headers
)

set(
        MY_SOURCES
        src/example.cpp
        src/glad.c
        src/EBO.cpp
        src/VAO.cpp
        src/VBO.cpp
)
# Define the My_OpenGL_Portfolio library
add_library(My_OpenGL_Portfolio SHARED ${MY_SOURCES})

target_link_libraries(My_OpenGL_Portfolio
        /opt/homebrew/opt/glfw/lib/libglfw.3.dylib  # Full path to GLFW
        -L/opt/homebrew/lib                         # Linker flag to find libraries
        -lglut                                      # Link against FreeGLUT
        "-framework OpenGL"                         # OpenGL framework
        "-framework Cocoa"                          # Cocoa for macOS windowing
        "-framework IOKit"                          # For input devices
        "-framework CoreVideo"                      # For video handling
)