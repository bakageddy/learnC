#include <stdio.h>

int main(void) {
    char firstName[21], lastName[21];
    printf("Enter your first name and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("Your Name is \n"
            "%s, %s\n",
            lastName, firstName);
    return 0;
}
