#include <stdio.h>

int main(void) {
    long num, sum = 0L;
    int status;
    printf("Enter a number to add (q to quit) : ");
    status = scanf("%ld", &num);
    while (status == 1) {
        sum += num;
        printf("Enter a number to add (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld\n", sum);

    return 0;
}
