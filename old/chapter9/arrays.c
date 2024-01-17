#include <stdio.h>

int main(void) {
    int powers[8] = {1, 2, 4, 8, 16, 32, 64};
    printf("%zd\n", sizeof(int));
    for (int i = 0; i != (sizeof(powers) / sizeof(int)); i += 1) {
        printf("The Element at posistion %d is %d\n", i, powers[i]);
    }
    return 0;
}
