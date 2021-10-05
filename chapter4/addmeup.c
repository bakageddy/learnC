#include <stdio.h>

int main(void) {
    int input, sum = 0;
    printf("Enter a value: ");
    scanf("%d", &input);
    while (--input >= 0) {
        sum += input;
    }
    printf("Sum of integers is %d\n", sum);
    return 0;

}
