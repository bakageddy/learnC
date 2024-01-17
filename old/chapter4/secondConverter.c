#include <stdio.h>

int main(void) {
    const int SEC_CONV = 60;
    int secs, min, reminder;
    printf("The Amount of Seconds: ");
    scanf("%d", &secs);
    while (secs > 0) {
        min = secs / SEC_CONV;
        reminder = secs % SEC_CONV;
        printf("\n%d seconds is %d minutes and %d seconds\n",
                secs, min, reminder);
        printf("Enter next value: (<= 0 to quit): ");
        scanf("%d", &secs);
    }
    return 0;
}
