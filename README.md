# Egg Problem Solver

This project implements a solution to the classic egg problem using both dynamic programming and a recursive approach. It also includes unit tests using Google Test and performance benchmarks using Google Benchmark.

## Egg Problem Description

The egg problem is a classic problem in dynamic programming. It involves determining the minimum number of attempts needed to find the highest floor from which an egg can be dropped without breaking, given a certain number of eggs and floors.

## Project Structure

```
egg-problem-solver
├── src
│   ├── egg_problem.h          # Header file for the EggProblem class
│   ├── egg_problem.cpp        # Implementation of the EggProblem class methods
│   └── main.cpp               # Entry point of the application
├── tests
│   └── egg_problem_test.cpp   # Unit tests for the EggProblem class
├── benchmarks
│   └── egg_problem_benchmark.cpp # Benchmark tests for performance comparison
├── CMakeLists.txt             # CMake configuration file
└── README.md                  # Project documentation
```

## Building the Project

To build the project, follow these steps:

1. Clone the repository:
   ```
   git clone <repository-url>
   cd egg-problem-solver
   ```

2. Create a build directory:
   ```
   mkdir build
   cd build
   ```

3. Run CMake to configure the project:
   ```
   cmake ..
   ```

4. Build the project:
   ```
   cmake --build .
   ```

## Running the Program

After building the project, you can run the application using the following command:
```
./egg_problem_solver
```

## Running Tests

To run the unit tests, you can use the following command:
```
./tests/egg_problem_test
```

## Running Benchmarks

To run the benchmarks, use the following command:
```
./benchmarks/egg_problem_benchmark
```

## Dependencies

This project requires the following libraries:
- Google Test for unit testing
- Google Benchmark for performance benchmarking

Make sure to install these dependencies before building the project.

## License

This project is licensed under the MIT License. See the LICENSE file for more details.