// oh oh, i think i was not supposed to use functions
// in my previous exercises.
// too bad!

#include <stdio.h>

double min(double x, double y);
int main(void) {
    double x = 10, y = 12;
    printf("Hello\n");
    printf("Minimum of %lf and %lf is %lf\n", x, y, min(x, y));
    return 0;
}

double min(double x, double y) {
    return (x > y ? y : x);
}
