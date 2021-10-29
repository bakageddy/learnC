#include <stdio.h>
#include "printMe.h"

#define SIZE 5

void reverseMe(double* array, unsigned int size);
int main(void) {
    double array[5] = {1, 2, 3, 4, 5};
    reverseMe(array, SIZE);
    printMe(array, SIZE);
    return 0;
}

void reverseMe(double* array, unsigned int size) {
    double temp;
    int end = size - 1;
    for (int i = 0; i < size/2 ; i++) {
        temp = array[i];
        array[i] = array[end];
        array[end] = temp;
        end--;
    }
}
