#include <stdio.h>

int main(void) {
    for (int i = 10; i <= 100000; i++) {
            printf("%9d %9d %9d\n", i, i*2, i*i);
    }
    return 0;
}
