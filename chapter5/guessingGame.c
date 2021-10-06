#include <stdio.h>
// TODO: Make a Goddamn Project.

int main(void) {
    int num = 0;
    for (printf("Keep entering numbers!\n"); num != 6; ) { // You can skip the increment op.
        scanf("%d", &num); // Executed as the loop of the body.
        // Printf is executed once!
    }
    printf("That's the one!\n");
    return 0;
}

