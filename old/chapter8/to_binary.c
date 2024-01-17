#include <stdio.h>

void to_binary(int number);
int main(void) {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    to_binary(number);
    printf("\n");
    return 0;
}

void to_binary(int number) {
    int r;
    r = number % 2;
    if (number >= 2)
        to_binary(number / 2);
    putchar(r == 0 ? '0' : '1');
    return;
}
