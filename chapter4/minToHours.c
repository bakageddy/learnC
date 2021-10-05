#include <stdio.h>

#define MIN_TO_HOUR 60

int main(void) {
    int hours, minutes, input;
    printf("How many minutes? : ");
    scanf("%d", &input);
    hours = input / MIN_TO_HOUR;
    minutes = input % MIN_TO_HOUR;
    printf("That's %d hours and %d minutes\n", hours, minutes);
    return 0;
}
