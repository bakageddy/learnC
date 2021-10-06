#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++) {
            printf("%5d %5d\n", i, i * i * i);
    }
    return 0;
}
