#include <stdio.h>

#define NAME "Gigathink, Inc."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94040"
#define WIDTH 40


// TODO: Make a damn project dude!

void starbar(int width);
int main(void) {
    starbar(WIDTH);
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(WIDTH);
}

void starbar(int width) {
    for (int i = 0; i < width; i++)
        putchar('*');
    putchar('\n');
}
