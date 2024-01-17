#include <stdio.h>
#include <string.h>


int main(void) {
    char line[255], c;
    int i = 0;
    while (scanf("%c", &c) == 1) {
        if (c == '\n') {
            line[i++] = '\0';
            break;
        } else {
            line[i++] = c;
        }
    }
    for (int i = strlen(line); !(i < 0); i--) {
        printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}
