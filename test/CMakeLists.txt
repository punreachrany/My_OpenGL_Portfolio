# Find GTest
find_package(GTest REQUIRED)

# Include directories
include_directories(
        ../lib/include
)

# Define test executables
add_executable(test_portfolio portfolio_test.cpp)

# Define common libraries
set(MY_LIBRARIES
        My_OpenGL_Portfolio
        GTest::GTest
        GTest::Main
)

# Link libraries to test executables
target_link_libraries(test_portfolio PRIVATE ${MY_LIBRARIES})

# Define tests
add_test(NAME portfolio_test COMMAND test_portfolio)