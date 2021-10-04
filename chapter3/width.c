#include <stdio.h>
#define PAGES 950

int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES); // Makes a padding of size 2, irrelevant in this case
    printf("*%10d*\n", PAGES); // Makes a padding of size 10, from the right side
    printf("*%-10d*\n", PAGES); // Same as above, except from the left.
    return 0;
}
