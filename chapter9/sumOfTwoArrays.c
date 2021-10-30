#include <stdio.h>
#define LEN 5

void printMe(int* array, int size);
void sumOfTwoArrays(int* array1, int* array2, int* array3, int size);

int main(void) {
    int array1[LEN] = {1, 2, 4, 5, 8};
    int array2[LEN] = {2, 1, 0, 4, 6};
    int array3[LEN];
    sumOfTwoArrays(array1, array2, array3, LEN);
    printMe(array3, LEN);
    return 0;
}

void sumOfTwoArrays(int* array1, int* array2, int* array3, int size) {
    for (int i = 0; i < size; i++) {
        array3[i] = array1[i] + array2[i];
    }
}

void printMe(int* array, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}
