#ifndef ANISOTROPY_01_H_
#define ANISOTROPY_01_H_

#include <cmath> // Include standard math library for mathematical functions

// Declare the functions with OpenACC pragmas to ensure they are compiled for the GPU
#pragma acc routine seq
void anisotropy_01_dAdq(double *qab, double *dadq, long a, long b, double *dab, long NUMPHASES);

#pragma acc routine seq
double anisotropy_01_function_ac(double *qab, long a, long b, double *dab, long NUMPHASES);

#endif // ANISOTROPY_01_H_
