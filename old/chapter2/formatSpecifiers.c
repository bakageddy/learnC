#include <stdio.h>

int main(void) {
    int x = 10;
    unsigned int un = 20000000;
    short end = 200;

    printf("Integer: %d; Octal: %o; Hex: %x\n", x, x, x); // Displays it as normal numbers
    printf("Integer: %d; Octal: %#o; Hex: %#x\n", x, x, x); // Displays it as binary-like representations.
    // To Convert x to long type, append l to it.
    x = 10l;
    printf("Long: %ld\nSize Of %ld is %lu\n", 10l, 10l, sizeof(x));
    // Convert x to long long type.
    x = 10ll;
    printf("Long Long: %lld\nSize of %lld is %lu\n", 10ll, 10ll, sizeof(x));

    // For Unsigned int.
    printf("Unsigned Int: %ud, Int: %d\n", un, un);

    // For Shorts.
    printf("Short: %hd, Int: %d\n", end, end);

    // Misc.
    printf("%%a is used for representing floats in hex digits with p notation\n");
    printf("%%A is used for representing floats in hex digits with P notation\n");
    printf("%%g is used for representing floats either in exp or in decimal notation\n");
    printf("%%G is used for representing floats either in exp(E) or in decimal notation\n");
    printf("%%i is used for representing signed decimal integers\n");
    printf("%%u is used for representing unsigned decimal integers\n");
    printf("%%%% is used for printing two signing\n");

    return 0;
}
