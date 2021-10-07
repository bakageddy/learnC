#include <stdio.h>

int main(void) {
    char let = 'A';
    int counter = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j != i; j++) {
            printf("%c", let + counter);
            counter += 1;
        }
        printf("\n");
    }

    return 0;
}

/* 1 */
/* 2 3 */
/* 4 5 6 */
/* 7 8 9 10 */
/* 11 12 13 14 15 */
/* 16 17 18 19 20 21 */
