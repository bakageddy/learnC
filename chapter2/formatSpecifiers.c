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

    return 0;
}
