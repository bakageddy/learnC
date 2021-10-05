#include <stdio.h>

double cube(double n);
int main(void) {
    double value;
    printf("Enter a value: ");
    scanf("%lf", &value);
    printf("%lf\n", cube(value));
}

double cube(double n) {
    double n2 = n * n;
    return n2 * n;
}
