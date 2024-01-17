#include <stdio.h>

#define DUNBAR 150

int main(void) {
    int i = 1, friends = 5;
    while (friends < DUNBAR) {
        friends -= 1;
        friends *= 2;
        i++;
    }
    printf("%d weeks\n", i);
    return 0;
}
