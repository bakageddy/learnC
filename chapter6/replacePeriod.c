#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter a line (# to quit): ");
    while ((ch = getchar()) != '#') {
        if (ch == '.') {
            printf("!");
        } else if (ch == '!') {
            printf("!!");
        } else {
            printf("%c", ch);
        }
    }
    printf("\nBye\n");
    return 0;
}
