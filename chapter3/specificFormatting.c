#include <stdio.h>
#include <string.h>

int main(void) {
    char firstName[21];
    printf("Enter Your Name: ");
    scanf("%s", firstName);
    printf("\"%s\"\n", firstName); // In Double Quotations
    printf("\"%20s\"\n", firstName); // Padding of 20 char, right sided
                                   // wrapped by quotes.
    printf("\"%-20s\"\n", firstName);
    printf("*%*s*\n", ((int) strlen(firstName)) + 3, firstName);
    return 0;
}
