#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter a character (# to quit): ");
    while ((ch = getchar()) != '#') {
        switch (ch) {
            case '.':
                printf("!");
                break;
            case '!':
                printf("!!");
                break;
            default:
                printf("%c", ch);
                break;
        }
    }
    printf("\nBye\n");
    return 0;
}
