#include <stdio.h>

void display(char aChar, int lines, int width);
int main(void) {
    int rows, col, ch;
    printf("Enter a character and two integers!");
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &col);
        display(ch, rows, col);
        printf("Enter another character and two integers (Enter to quit): ");
    }
    return 0;
}

void display(char aChar, int lines, int width) {
    for (int i = 1; i <= lines; i++) {
        for (int j = 1; i <= width; j++) {
            putchar(aChar);
        }
        putchar('\n');
    }
}
