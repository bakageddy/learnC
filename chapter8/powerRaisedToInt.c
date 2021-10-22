#include <stdio.h>
#include <stdlib.h>

long double power(int base, int power);
int main(void) {
    printf("%.16Lf\n", power(10, -10) );
    return 0;
}

long double power(int base, int power) {
    long double result = base;
    if ((base == 0) && (power == 0)) {
        printf("It's Undefined but 0^0 is 1\n");
        return 1;
    } else if (base == 0) {
        return result;
    } else {
        for (int i = 0; i < abs(power); i++) {
            result *= base;
        }
        if (power < 0) {
            result = 1/result;
            return result;
        } else
            return result;
    }
}
