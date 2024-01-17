#include <stdio.h>

int main(void) {
    int days_of_a_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int index = 0; index < sizeof days_of_a_month / sizeof(int); index++) {
        printf("Month %3d has %2d days\n", index + 1, days_of_a_month[index]);
    }
    return 0;
}
