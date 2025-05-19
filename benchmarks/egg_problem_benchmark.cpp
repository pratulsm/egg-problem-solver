#include <benchmark/benchmark.h>
#include "egg_problem.h"

// Benchmark for Dynamic Programming solution
static void BM_SolveDP(benchmark::State& state) {
    EggProblem eggProblem;
    const int eggs = state.range(0);
    const int floors = state.range(1);
    
    for (auto _ : state) {
        benchmark::DoNotOptimize(eggProblem.solveDP(eggs, floors));
    }
}

// Benchmark for Recursive solution
static void BM_SolveRecursive(benchmark::State& state) {
    EggProblem eggProblem;
    const int eggs = state.range(0);
    const int floors = state.range(1);
    
    for (auto _ : state) {
        benchmark::DoNotOptimize(eggProblem.solveRecursive(eggs, floors));
    }
}

// Register benchmarks with different input sizes
BENCHMARK(BM_SolveDP)
    ->Args({2, 10})
    ->Args({2, 20})
    ->Args({3, 15});

BENCHMARK(BM_SolveRecursive)
    ->Args({2, 10})
    ->Args({2, 20})
    ->Args({3, 15});

BENCHMARK_MAIN();