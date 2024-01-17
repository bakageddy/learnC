#include <stdio.h>

int main(void) {
    int value = 10;
    printf("\a"); // Produces a sound in this machine.
    printf("\b"); // Backspace.
    printf("Dinesh"); // Backspace.
    printf("\f"); // Form Feed.
    printf("Dinesh"); // Backspace.
    printf("\n"); // New Line.
    printf("Dinesh"); // Backspace.
    printf("\r"); // Carriage Return.
    printf("Dinesh"); // Backspace.
    printf("\t"); // Horizontal tab, use \v for vertical tab.
    printf("\010 value"); // Said that \0oo is for octal value
                          // where oo represents a value.

    return 0;
}
