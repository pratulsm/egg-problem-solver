cmake_minimum_required(VERSION 3.10)
project(EggProblemSolver VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find all required packages
find_package(GTest REQUIRED)
find_package(benchmark REQUIRED)
find_package(Threads REQUIRED)

# Enable testing
enable_testing()

# Create library for egg problem
add_library(egg_problem_lib
    src/egg_problem.cpp
)
target_include_directories(egg_problem_lib PUBLIC src)

# Create the main executable
add_executable(egg_problem_solver src/main.cpp)
target_link_libraries(egg_problem_solver PRIVATE egg_problem_lib)

# Unit test executable
add_executable(egg_problem_tests 
    tests/egg_problem_test.cpp
)
target_link_libraries(egg_problem_tests 
    PRIVATE 
    egg_problem_lib
    GTest::GTest 
    GTest::Main
)

# Register unit tests
add_test(NAME EggProblemTests COMMAND egg_problem_tests --gtest_output=xml:test_results.xml)

# Benchmark executable
add_executable(egg_problem_benchmarks
    benchmarks/egg_problem_benchmark.cpp
)
target_link_libraries(egg_problem_benchmarks
    PRIVATE
    egg_problem_lib
    benchmark::benchmark
    benchmark::benchmark_main
    Threads::Threads
)