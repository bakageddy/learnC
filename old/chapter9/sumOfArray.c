#include <stdio.h>

int sum(int* array, int length);
int main(void) {
    int elements[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d\n", sum(elements, 10));
    return 0;
}

int sum(int* array, int length) {
    int sum = 0;
    int i;
    for (i = 0; i < length; i++) {
        sum += array[i];
    }
    return sum;
}
