#include <stdio.h>

int main(void) {
    int count = 100;
    while (--count != 0) {
        printf("%d bottles of spring water on the wall,"
                " %d bottles of spring water!\n"
                "Take one down and pass it around,\n"
                "%d bottles of spring water!\n", count, count, (count - 1));
    }
    return 0;
}
