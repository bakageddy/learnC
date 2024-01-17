#include <stdio.h>

int main(void) {
    float conv = 3.156e7, years;
    printf("Enter your age: ");
    scanf("%f", &years);
    printf("You are %.5f secs old\n", years * conv);
    return 0;
}
