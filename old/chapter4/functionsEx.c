#include <stdio.h>

void pound(int n);
int main(void) {
    int foo = 10;
    float blah = 10.0f;
    char baz = '!';
    pound(foo);
    pound(blah); // Automatic Type casting
    pound(baz);
    return 0;
}

void pound(int n) {
    while (--n != 0) {
        printf("#");
    }
    printf("\n");
}

