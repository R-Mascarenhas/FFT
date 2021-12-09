
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include "fourier.h"
# define PI	3.14159265358979323846264338327950288

int main(int argc, char *argv[]){
    float Fs = 10;
    float stopTime = 1.0;
    float dT = 1/Fs;
    int N = Fs*stopTime - 1;
    float power[N/2];
    float frequency[N/2];
    float dF = 0;

    float signal[] = {0.00000000e+00,  9.51056516e-01,  5.87785252e-01, -5.87785252e-01, -9.51056516e-01, -2.44929360e-16,  9.51056516e-01,  5.87785252e-01, -5.87785252e-01};
    int size = sizeof(signal)/sizeof(float);

    complex_t fourier[size];
    calculateDft(signal, size, fourier);

    for (int i = 0; i < N/2; i++){
        frequency[i] += dF;
        power[i] = sqrt(pow(fourier[i].Re,2)+pow(fourier[i].Im,2))/size;
        printf("frequency: %.2f\tPower: %.2f\n",frequency[i], power[i]);
        dF += Fs/N;
    }
    
    return 0;
}