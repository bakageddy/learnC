#include <stdio.h>

int main(void) {
    int number, status = 1;
    do {
        printf("Enter a number (q to quit): ");
        status = scanf("%d", &number);
        for (int i = 0; i < number; i++) {
            printf("%3d times %3d is %3d\n", number, i, number*i);
        }
    } while (status != 0);
    return 0;
}
