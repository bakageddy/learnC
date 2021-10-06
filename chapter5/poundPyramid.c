#include <stdio.h>

int main(void) {
    char foo = '$';
    for (int i = 1; i < 8; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", foo);
        }
        printf("\n");
    }
    return 0;
}
