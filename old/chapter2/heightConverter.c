#include <stdio.h>

int main(void) {
    float myHeight; // The Users Height.
    printf("Enter your height in centimeters: ");
    scanf("%f", &myHeight);
    printf("You are %.2f inches tall", myHeight/2.54);
    return 0;
}
