#include <stdio.h>

int abs(int n);
long double recursivePower(double base, int power);
int main(void) {
    printf("%.16Lf\n", recursivePower(0, 0));
    return 0;
}

long double recursivePower(double base, int power) {
    if (power < 0)
        return 1 / recursivePower(base, abs(power));
    else if (power == 0)
        return 1;
    else if (power > 0)
        return base * recursivePower(base, power - 1);
    else
        return 0;
}

int abs(int n) {
    if (n > 0) {
        return n;
    } else {
        return -n;
    }
}
