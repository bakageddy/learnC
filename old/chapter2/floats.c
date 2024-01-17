#include <stdio.h>

int main(void) {
    float planck = 6.63e-34;
    double doubleplanck = 6.63e-34;
    float biggest = 3.4e38 * 100.0f;
    printf("%.100f\n", planck);
    printf("%e is the scientific notation\n", planck);
    printf("%a is the hexadecimal notation of %e\n", planck, planck);
    printf("%f is also the value of %e\n", doubleplanck, doubleplanck);
    // Long Doubles are represented by Lf format specifier.
    printf("%e\n", biggest); // prints infinty or inf.
    return 0;
}
