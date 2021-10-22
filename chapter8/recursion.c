#include <stdio.h>

int factorial(int number);
int main(void) {
    printf("calling a func..\n");
    printf("Factorial of 10 is %d", factorial(10));
    return 0;
}

int factorial(int number) {
    if (number == 0) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}
