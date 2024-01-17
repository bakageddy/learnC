#include <stdio.h>

int main(void) {
    long long int sum = 0;
    int count;
    printf("Enter a number: ");
    scanf("%d", &count);
    while (count != 0) {
        sum += count * count;
        count -= 1;
    }
    printf("Sum is %lld\n", sum );
    return 0;
}
