#include <stdio.h>

int main(void) {
    int number, counter = 1;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (counter < 21) {
        printf("\r%2d x %2d = %2d\n", number, counter, number * counter);
        counter += 1;
    }
    return 0;
}
