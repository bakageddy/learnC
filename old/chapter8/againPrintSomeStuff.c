#include <stdio.h>

void printColumns(char character, unsigned int columns, unsigned int rows);
int main(void) {
    printColumns('X', 10, 12);
    return 0;
}

void printColumns(char character, unsigned int columns, unsigned int rows) {
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++)
            printf("%c", character);
        printf("\n");
    }
}
