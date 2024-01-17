#include <stdio.h>
#include <string.h>

int main(void) {
    char firstName[21], lastName[21];
    printf("Enter your first and last name: ");
    scanf("%s %s", firstName, lastName);
    printf("%*s %*s\n", (int) strlen(firstName), firstName, (int) strlen(lastName), lastName);
    printf("%*lu %*lu\n", (int) strlen(firstName), strlen(firstName), (int) strlen(lastName), strlen(lastName));
    return 0;
}
