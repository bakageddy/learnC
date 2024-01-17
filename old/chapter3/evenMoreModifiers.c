#include <stdio.h>

int main(void) {
    signed int aVar = 10, anotherVar = -12;
    printf("The \"-\" modifier will print the items left-justified.\n"
            "For Example:\n%-20s"
            "Padding <-\n", "Dinesh Kumar"); // Nice Padding.

    printf("The Signed Integer with automatic display of polarity:\n"
            "This will print a +10:\n"
            "%+d\n"
            "This will print a -12:\n"
            "%+d\n", aVar, anotherVar); // Will be Helpful sometimes.

    printf("The Signed Integer with automatic display of polarity, if negative:\n"
            "This will print a 10:\n"
            "% d\n"
            "This will print a -12:\n"
            "% d\n", aVar, anotherVar);

    printf("Tell the compiler to print padding as 0\n"
            "Printing : % 010d\n", aVar);

    return 0;
}
