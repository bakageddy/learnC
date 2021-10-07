#include <stdio.h>

double sumOf(double* array, int times);
int main(void) {
    double arrayTwoD[2][8];
    for (int i = 0; i < 8; i++) {
        printf("Enter a element at posistion 0 %i: ", i);
        scanf("%lf", &arrayTwoD[0][i]);
    }
    for (int j = 0; j < 8; j++) {
        arrayTwoD[1][j] = sumOf(arrayTwoD[0], j);
    }

    for (int i = 0; i < 8; i++) {
        printf("The Element at %d is %lf\n", i, arrayTwoD[1][i]);
    }
    return 0;
}

double sumOf(double* array, int times) {
    double sum = 0.0;
    for (int i = 0; i < times; i++)
        sum += array[i];
    return sum;
}
