#include <stdio.h>

int sumOfSquare(int upper, int lower);
int main(void) {
    int upper, lower;
    printf("Enter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("%d %d", lower, upper);
    while (lower != upper) {
        printf("The sums of the squares from %d to %d is %d\n",
                lower * lower, upper * upper, sumOfSquare(upper, lower));
        printf("Enter lower and upper limits (enter the same no twice to quit): ");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done\n");
    return 0;
}

int sumOfSquare(int upper, int lower) {
    int sum = 0;
    for (int i = lower; i <= upper; i++) {
        sum += i * i;
    }
    return sum;
}
