#include <stdio.h>

double smallest(double x, double y);
double biggest(double x, double y);
void sortOutTheseValues(double* x, double* y, double* z);
int main(void) {
    double x = 10, y = 12, z = 8;
    double *ptr1 = &x, *ptr2 = &y, *ptr3 = &z;
    printf("Values: %lf %lf %lf\n", x, y, z);
    sortOutTheseValues(ptr1, ptr2, ptr3);
    printf("Values: %lf %lf %lf\n", x, y, z);
    return 0;
}

void sortOutTheseValues(double *x, double *y, double *z) {
    double largest, littlest, middle, sum;
    largest = biggest(*x, (biggest(*y, *z)));
    littlest = smallest(*x, (smallest(*y, *z)));
    sum = *x + *y + *z;
    middle = sum - (largest + littlest);
    *x = largest;
    *y = middle;
    *z = littlest;
}

double smallest(double x, double y) {
    return (x > y) ? y : x;
}

double biggest(double x, double y) {
    return (x < y) ? y : x;
}
