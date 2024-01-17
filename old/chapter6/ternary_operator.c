#include <stdio.h>
#include <stdbool.h>

bool isPositiveP(int x) {
    return (x < 0) ? false : true;
}

int main(void) {
    printf("%d", isPositiveP(0));
    return 0;
}
