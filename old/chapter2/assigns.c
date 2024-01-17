#include <stdio.h>

int main(void) {
    int cost = 12.99; // Truncates (removes the decimal point).
    float cost2 = 12.99; // Restores the full value.
    float pi = 3.1415926536; // Only retains the first 6 digits after the decimal point.
    printf("%d => cost\n", cost);
    printf("%f => cost2\n", cost2);
    printf("%f => pi\n", pi);
    printf("Dinesh" "Kumar\n"); // Combines the whole string.
    return 0;
}
