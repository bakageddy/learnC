#include <stdio.h>
#define SIZE 10

int largestOf(double* givenArray, int size);
int main(void) {
    double array[SIZE] = {10, 20, 11, 22, 66, 10, 12, 14, 17, 45};
    int largest = largestOf(array, SIZE);
    printf("largest : %d\n", largest);
    return 0;
}

int largestOf(double* givenArray, int size) {
    double largest = *givenArray;
    int j = 0;
    for (int i = 1 ; i != size; i++) {
        if (largest >= *(givenArray + i)) {
            continue;
        } else {
            largest = *(givenArray + i);
            j = i;
        }
    }
    return j;
}
