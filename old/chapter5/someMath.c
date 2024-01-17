#include <stdio.h>

float foo(float bar, float baz);

int main(void) {
    float num1, num2;
    int status;
    do {
        printf("Enter a pair of floats (q to quit): ");
        status = scanf("%f %f", &num1, &num2);
        printf("%.3f\n", foo(num1, num2));
    } while (status != 0);
    return 0;
}

float foo(float bar, float baz) {
    return (bar - baz) / (bar * baz);
}
