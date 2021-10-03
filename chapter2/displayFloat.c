#include <stdio.h>

int main(void) {
    float aVar;
    printf("Enter a Floating pointing value: ");
    scanf("%f", &aVar);
    printf("Fixed Point Notation: %f\n", aVar);
    printf("Exponential Notation: %e\n", aVar);
    printf("P Notation: %pe\n", aVar);
    return 0;
}
