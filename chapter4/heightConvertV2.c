#include <stdio.h>
#define CM_TO_INCH 2.54
#define INCH_TO_FEET 12
#define CM_TO_FEET 30.48

int main(void) {
    float inches, height, feet;
    printf("Enter a height: ");
    scanf("%f", &height);
    feet = inches = 0;
    while (height > 0) {
        feet = (int) height / CM_TO_FEET; // Get's a truncated value of feet from cm.
        inches = (height / CM_TO_INCH) - ((int) feet * INCH_TO_FEET); // cm to inches minus feet in inches
        printf("You are %d feet and %.2f inches tall\n", (int) feet, inches);
        printf("Enter a height (<= 0 to quit): ");
        scanf("%f", &height);
    }
    printf("Bye..\n");
    return 0;
}
