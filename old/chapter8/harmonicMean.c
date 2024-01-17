#include <stdio.h>

double harmonicMean(double n, double m);
int main(void) {
    printf("%lf\n", harmonicMean(2, 3));
    return 0;
}

double harmonicMean(double n, double m) {
    if ((n == 0) || (m == 0)) {
        return 0;
    }
    double inverse1 = 1/n, inverse2 = 1/m,  mean;
    mean = (inverse1 + inverse2) / 2;
    mean = 1/mean;
    return mean;
}
