#include <stdio.h>

#define SIZE 5
void printArray(double* array, int size);
void copy_arr(double* targetArray, double* sourceArray, int upto);
void copy_ptr(double* targetArray, double* sourceArray, int upto);
void copy_ptrs(double* targetArray, double* startingSource, double* endingSource);
int main(void) {
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    printArray(target1, SIZE);
    copy_ptr(target2, source, 5);
    printArray(target2, SIZE);
    copy_ptrs(target3, source, source + 5);
    printArray(target3, SIZE);
    return 0;
}

void copy_arr(double* targetArray, double* sourceArray, int upto) {
    for (int i = 0; i < upto; i++)
        targetArray[i] = sourceArray[i];
}

void copy_ptr(double* targetArray, double* sourceArray, int upto) {
    for (int i = 0; i < upto; i++)
        *(targetArray + i) = *(sourceArray + i);
}

void copy_ptrs(double* targetArray, double* startingSource, double* endingSource) {
    while (startingSource != endingSource) {
        *targetArray = *startingSource;
        targetArray++;
        startingSource++;
    }
}

void printArray(double* targetArray, int size) {
    for (int i = 0; i < size; i++)
        printf("%.1lf ", targetArray[i]);
    printf("\n");
}
