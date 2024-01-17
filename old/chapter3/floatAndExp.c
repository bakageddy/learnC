#include <stdio.h>

int main(void) {
    float aFloat;
    printf("Enter a float: ");
    scanf("%f", &aFloat);
    printf("The Number you entered is : %.2f or %.2e\n", aFloat, aFloat);
    return 0;
}
