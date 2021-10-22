#include <stdio.h>

void larger_of(int* x, int* y);
int main(void) {
    int x = 10, y = 12;
    int *ptr1 = &x, *ptr2 = &y;
    printf("Values: %d %d\n", x ,y);
    larger_of(ptr1, ptr2);
    printf("Values: %d %d\n", x ,y);
    return 0;
}

void larger_of(int* x, int* y) {
    int larger = (*x > *y ? *x : *y);
    *x = larger;
    *y = larger;
}
