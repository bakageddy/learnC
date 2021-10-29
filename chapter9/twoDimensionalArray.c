#include <stdio.h>

int main(void) {
    int twoDArray[3][3] = {0};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", twoDArray[i][j]);
        printf("\n");
    }
    return 0;
}
