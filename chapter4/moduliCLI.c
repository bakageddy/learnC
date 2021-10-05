#include <stdio.h>

int main(void) {
    int n1, n2, result;
    printf("Enter a value for the second operand: ");
    scanf("%d", &n2);
    printf("Enter the value for the first operand: ");
    scanf("%d", &n1);
    while (n1 > 0) {
        printf("%d modulo %d is %d\n",
                n1, n2, n1 % n2);
        printf("Enter the value for the first operand: (=< 0to quit) ");
        scanf("%d", &n1);
    }
}
