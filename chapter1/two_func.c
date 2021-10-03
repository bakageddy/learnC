// A Program that uses two functions

#include <stdio.h>

void butler(void);
int main(void) {
    printf("I will start the butler function.\n");
    butler();
    printf("Butler function has stopped.\n");
    return 0;
}

void butler(void) {
    printf("I am the butler function.\n");
}
