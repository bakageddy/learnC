#include <stdio.h>

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) { // I can redirect text from files too, wow!!
        putchar(ch);
    }
    return 0;
}
