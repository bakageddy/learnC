#include <stdio.h>

int main(void) {
    int ch, count = 1;
    while ((ch = getchar()) != EOF) {
        if ((count % 10) == 1) {
            printf("\n");
        } else if (ch == '\n') {
            printf("\n");

            switch (ch) {
                case '\n':
                    printf("The Value of \\n is %d\n", ch);
                    break;
                case '\t':
                    printf("The Value of \\t is %d\n", ch);
                    break;
                case '\r':
                    printf("The Value of \\r is %d\n", ch);
                    break;
                case '\a':
                    printf("The Value of \\a is %d\n", ch);
                    break;
                default:
                    printf("The Value of %c is %d\n", ch);
            }
        }
        count++;
    }
    printf("Bye!\n");
    return 0;
}
