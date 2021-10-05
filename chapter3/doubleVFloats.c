#include <stdio.h>
#include <float.h>

int main(void) {
    double var = 1.0/3.0;
    float anotherVar = 1.0/3.0;
    printf("%.4f %.4f\n", var, anotherVar);
    printf("%.12f %.12f\n", var, anotherVar); // Double can display upto 15.
    printf("%.16f %.16f\n", var, anotherVar); // Floats can only display upto 6
    printf("Also the value of FLT_DIG: %d\nDBL_DIG: %d\n", FLT_DIG, DBL_DIG);
    return 0;
}
