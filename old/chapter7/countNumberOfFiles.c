#include <stdio.h>
int main(void) {
    int count = 0, ch;
    while ((ch = getchar()) != EOF) {
        count++;
    }
    printf("The Number of characters including newlines!: %d\n", count);
    return 0;
}
