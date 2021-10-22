// Converts a number to base 2 to 10;
// I will do this tomorrow, it's already 1:39 AM

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void printBase(char* number, int base, int count);
int main(void) {
    char* number = "10\0";
    /* int number2 = atoi(number); */
    printf("%c", number[1]);
    printBase(number, 2, strlen(number));
    return 0;
}

void printBase(char* number, int base, int count) {
}
