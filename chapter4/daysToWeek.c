#include <stdio.h>
#define DAY_TO_WK 7

int main(void) {
    int days, weeks, input;
    printf("Amount of Days: ");
    scanf("%d", &input);
    while (input > 0) {
        weeks = input / DAY_TO_WK;
        days = input % DAY_TO_WK;
        printf("That's %d weeks and %d days...\n", weeks, days);
        printf("Enter another value (0 <= to quit): ");
        scanf("%d", &input);
    }
    printf("Bye..\n");
    return 0;
}
