#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);
void printPrime(int upperLimit);

int main(void) {
    int upperLimit;
    printf("Enter a number: ");
    scanf("%d", &upperLimit);
    printPrime(upperLimit);
    return 0;
}

bool isPrime(int num) {
    if (num > 1) {
        for (int i = 2; i <= (num)/2; i++) {
            if ((num % i) == 0)
                return 0;
            else
                continue;
        return 1;
        }
    } else {
        return 0;
    }
}
void printPrime(int upperLimit) {
    for (int i = 2; i <= upperLimit; i++) {
        if (isPrime(i))
            printf("%d\n", i);
        else
            continue;
    }
}
