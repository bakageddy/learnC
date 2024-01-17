#include <stdio.h>

int main(void) {
    char ch;
    printf("Input a char: ");
    scanf("%c", &ch);
    printf("You Entered %c whose ascii code is %d\n", ch, ch);
    return 0;
}
