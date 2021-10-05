#include <stdio.h>

int main(void) {
    int height;
    float result;
    printf("Enter your height (in cm): ");
    scanf("%d", &height);
    result = (float) height / 100.0;
    printf("You are %.2f meters tall!\n", result);
    return 0;
}
