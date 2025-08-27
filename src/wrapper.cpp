#include "src/x86simdsort-static-incl.h"

// g++ wrapper.cpp -mavx512f -mavx512dq -mavx512vl -O3 -o libx86simdsort.dll -shared -I./x86-simd-sort -fopenmp -DXSS_USE_OPENMP

extern "C" void qsort_float(float *arr, size_t size) {
    x86simdsortStatic::qsort(arr, size, false, true);
}

extern "C" void qsort_double(double *arr, size_t size) {
    x86simdsortStatic::qsort(arr, size, false, true);
}
