#include <stdio.h>

int main(void) {
    char var = 'A';
    for (int i = 0; i < 6; i++) {
        for (char j = 'F'; j != var + i; j--) {
            printf("%c", j);
        }
        printf("\n");
    }
}
