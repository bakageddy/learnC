#include <stdio.h>

int main(void) {
    int array[8], i;
    for (i = 0; i < (sizeof(array)/ sizeof(int)); i++) {
        printf("Enter a number at %d : ", i);
        scanf("%d", &array[i]);
    }

    for (int i = (sizeof(array) / sizeof(int) - 1);
        !(i < 0);
        i--) {
        printf("The Element at posistion %d is %d\n", i, array[i]);
    }
    return 0;
}
