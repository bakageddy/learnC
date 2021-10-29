#include <stdio.h>
#include "printMe.h"

void printMe(double* array, int size) {
    for (int i = 0; i < size; i++)
        printf("%lf ", array[i]);
    printf("\n");
}
