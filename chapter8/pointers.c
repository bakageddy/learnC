#include <stdio.h>

void interchange(int *x, int *y);
int main(void) {
    int x = 10, y = 20;
    int *ptr1 = &x, *ptr2 = &y;
    printf("Values: %d %d\n", x, y);
    interchange(ptr1, ptr2);
    printf("Values: %d %d\n", x, y);
    return 0;
}

void interchange(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
