

#ifndef __FOURIER_H__
#define __FOURIER_H__

#ifndef PI
# define PI	3.14159265358979323846264338327950288
#endif // !PI

#define EXP 2.718281828459045235360287

#define COEFF_EVEN  0
#define COEFF_ODD   1

typedef struct {
    float Re;
    float Im;
} complex_t;

typedef struct array {
    complex_t * complex;
    struct array * next;
} linkedComplex_t;

//int number_of_samples(float sample[]);
//float * sort_coeff(float sample[], int type);
//linkedComplex_t * FFT (float sample[], int k);
//double * IFFT (linkedComplex_t * sample, int k);

void calculateDft(float* signal, int N, complex_t *X);

#endif // !__FOURIER_H__
