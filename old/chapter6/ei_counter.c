#include <stdio.h>

int main(void) {
    char one, two;
    int count = 0;
    printf("Enter some characters (# to quit): ");
    while ((one = getchar()) != '#') {
        if (one == 'e') {
            two = getchar();
            if (two == 'i') {
                count++;
            } else {
                continue;
            }
        } else {
            continue;
        }
    }
    printf("The Total Counter = %d\n", count);
    return 0;
}
