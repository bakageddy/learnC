#include <stdio.h>

int main(void) {
    int terms;
    double sum1 = 1.0, sum2 = 1.0;
    printf("Enter the number of terms you want: ");
    scanf("%d", &terms);
    for (float i = 2.0;
         i < terms;
         i++) {
        if (((int) i % 2) == 0) {
            sum2 += 1.0 / i;
        } else {
            sum2 -= 1.0 / i;
        }
        sum1 += 1.0/i;
    }
    printf("%lf is the value of first sum at %d terms\n", sum1, terms);
    printf("%lf is the value of second sum at %d terms\n", sum2, terms);
}
