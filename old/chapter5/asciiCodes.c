#include <stdio.h>


int main(void) {
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++) {
        printf("The Ascii value of %c is %d\n", ch, ch);
    }
    return 0;
}
