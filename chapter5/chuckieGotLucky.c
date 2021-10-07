#include <stdio.h>

int main(void) {
    double principle = 1000000, rate = 0.08;
    int time = 1;
    while (!(principle <= 0)) {
        principle -= 100000;
        principle *= (1 + rate);
        printf("%lf\n", principle);
        time += 1;
    }
    printf("%d\n", time);
    return 0;
}
