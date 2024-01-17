#include <stdio.h>
#define SIZE 4

int main(void) {
    int no_data[SIZE];
    for (int i = 0; i < SIZE; i++) {
        printf("%3d%14d\n", i, no_data[i]); // Returns the values, stored at
                                            // memory value.
    }
    return 0;
}
