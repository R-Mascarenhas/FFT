#include "fourier.h"
#include <stdint.h>
#include <stdio.h>
#include <math.h>

// int number_of_samples(float sample[]) {
//     if (sizeof(sample) == 0)
//         return -1;
//     int number sizeof(sample)/sizeof(float);
//     return number;
// }

// float * sort_coeff(float sample[], int type) {
//     return (float) 0;
// }

void calculateDft(float* signal, int N, complex_t *X){
    //size_t N = sizeof(signal)/sizeof(float);
    //float X[N][N];
    //complex_t X[N];
    uint16_t *n = (int*) malloc(N * sizeof(uint16_t));
    //for(uint16_t i = 0; i < N; n[i] = ++i);
    //uint16_t * kn[] = {n,n};
    for(uint16_t i = 0; i < N; i++) {
        X[i].Re = 0;
        X[i].Im = 0;
        for(uint16_t j = 0; j < N; j++) {
            X[i].Re += signal[j] * cos(2*PI*i*j/N);
            X[i].Im += signal[j] * sin(2*PI*i*j/N);
            //kn[i][j] = n[i]*n[j];
        }
    }

    
    //double complex result[] = exp(-2 * I * PI * (complex) kn / N);

    //return *X;
}

// linkedComplex_t * FFT(float sample[], int k){
//     //numberOfSamples = sizeof(sample)/sizeof(float);

//     int n = number_of_samples(sample);

//     if (n == 1) {
//         return sample;
//     }

//     // w = ...;

//     // Sort coefficients
//     float coeff_even[] = sort_coeff(sample, COEFF_EVEN);
//     float coeff_odd[] = sort_coeff(sample, COEFF_ODD);

//     // Recursive step
//     linkedComplex_t * y_even = FFT(coeff_even);
//     linkedComplex_t * y_odd = FFT(coeff_odd);

//     //y = 

// }