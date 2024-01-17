#include <stdio.h>

int main(void) {
    int ascii;
    printf("Enter a integer value to convert to char: ");
    scanf("%d", &ascii);
    printf("\nInteger Value: %d\nChar Value: %c\n", ascii, ascii);
    return 0;
}
