#include <stdio.h>

int main(void) {
    int age, fieldWidth;
    float favNum;
    char name[41];
    printf("Hello, Enter Your Age, Your Favorite Floating Point and Your Puppy's name: ");
    scanf("%d %f", &age, &favNum);
    scanf("%40s", name); // Stops when it reaches 40 bytes or when a white space is entered.
    printf("\nYou Entered: %d %f %s\n", age, favNum, name);

    printf("Now Enter a Field width: ");
    scanf("%d", &fieldWidth);
    printf("Now a Number with the specified padding: "
            "*%+0*d\n", fieldWidth, age);
    return 0;
}
