#include <stdio.h>

// I Don't know why this fucking segfaults
int main(void) {
    char *p1 = "Klingon";
    p1[0] = 'F';
    printf("Klingon");
    printf(": Beware the %ss", p1);
    return 0;
}
