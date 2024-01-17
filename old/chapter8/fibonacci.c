#include <stdio.h>

long long int fibonacci(int times);
int main(void) {
    for (int i = 1; i < 10; i++) {
        printf("%lli\n", fibonacci(i));
    }
    return 0;
}

long long int fibonacci(int times) {
    long long int a = 1, b = 1, temp = 0;
    for (int i = 0; i < times; i++) {
        temp = b;
        b += a;
        a = temp;
    }
    return b;
}
