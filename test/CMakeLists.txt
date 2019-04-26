# Thread support is required 
find_package(Threads REQUIRED)

add_subdirectory(3rd_party/google-test)

# Add a testing executable
add_executable(unit_tests main.t.cpp)

target_link_libraries(unit_tests
    wintools
    GTest::GTest 
    GTest::Main
)

add_test(test_myapi unit_tests)