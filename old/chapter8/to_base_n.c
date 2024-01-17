// Converts a number to base 2 to 10;
// I will do this tomorrow, it's already 1:39 AM

#include <stdio.h>

void convertToAnyBase(int number, int base);
int main(void) {
    int dinesh = 129;
    convertToAnyBase(dinesh, 8);
    return 0;
}

void convertToAnyBase(int number, int base) {
    if (base == 10) {
        printf("%d", number);
    } else {
        while (number != 0) {
            printf("%d", number % base);
            number /= base;
        }
    }
    return;
}
