#include <stdio.h>
#include <math.h>

int main(void) {
    int powerOfTwo[8];
    int j = 0;
    for (int i = 1;
        i <= 8;
        i++) {
        powerOfTwo[i-1] = pow(2, i);
    }
    do {
        printf("%d\n", powerOfTwo[j]);
        j++;

    } while (j < 8);
    return 0;
}
