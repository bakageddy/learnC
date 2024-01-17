#include <stdio.h>

int main(void) {
    char alphabets[7] = "FEDCBA\0";
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%c", alphabets[j]);
        }
        printf("\n");
    }
    return 0;
}
