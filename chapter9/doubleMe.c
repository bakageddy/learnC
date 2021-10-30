#include <stdio.h>
#define COL 5
#define ROW 3

void printMe(int anArray[][COL], int rows, int columns);
void doubleMe(int anArray[][COL], int rows);

int main(void) {
    int twoDimArray[ROW][COL] = {
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
        {1, 2, 3, 4, 5},
    };
    doubleMe(twoDimArray, ROW);
    printMe(twoDimArray, ROW, COL);
    return 0;
}

void printMe(int anArray[][COL], int rows, int columns) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++)
            printf("%d ", anArray[i][j]);
        printf("\n");
    }
}

void doubleMe(int anArray[][COL], int rows) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < COL; j++) {
            anArray[i][j] *= 2;
        }
}
