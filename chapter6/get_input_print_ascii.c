#include <stdio.h>

int main(void) {
    char ch = ' ';
    int count = 0;
    printf("Enter some alphabets, # to exit: ");
    while ((ch = getchar()) != '#') {
        if ((count % 8) == 0) {
            printf("%c: %d ", ch, ch);
            printf("\n");
        } else {
            printf("%c: %d ", ch, ch);
        }
        count++;
    }
    printf("Bye\n");
    return 0;
}
