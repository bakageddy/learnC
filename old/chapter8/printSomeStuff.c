#include <stdio.h>

void chline(char ch, unsigned int i, unsigned int j);
int main(void) {
    unsigned int x = 4, y = 5;
    char aChar = 'X';
    chline(aChar, x, y);
    return 0;
}

void chline(char ch, unsigned int i, unsigned int j) {
    unsigned int x, y;
    for (x = 0; x < j; x++) {
        for (y = 0; y < i; y++)
            printf("%c", ch);
        printf("\n");
    }
}
