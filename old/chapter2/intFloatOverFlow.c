#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int intUpper = (INT_MAX) + 1;
    printf("%d\n", intUpper);

    float floatUpper = FLT_MAX + 1;
    printf("%f\n", floatUpper);

    int intLower = (INT_MIN) - 1;
    printf("%d\n", intLower);

    float floatLower = FLT_MAX - 1;
    printf("%f\n", floatLower);

    return 0;
}
