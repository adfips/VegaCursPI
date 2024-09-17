#include <benchmark/benchmark.h>
#include "../include/add.h"



static void BM_MyFunctionInt(benchmark::State& state) {
    for (auto _ : state) {
        int res1 = add(1,1);
        benchmark::DoNotOptimize(res1);
    }
}

static void BM_MyFunctionDouble(benchmark::State& state) {
    for (auto _ : state) {
        double res2 = add(0.1, 0.1);
        benchmark::DoNotOptimize(res2);
    }
}

// Регистрируем бенчмарк
BENCHMARK(BM_MyFunctionInt);
BENCHMARK(BM_MyFunctionDouble);

// Основная функция для запуска всех бенчмарков
BENCHMARK_MAIN();
