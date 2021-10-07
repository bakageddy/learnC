#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void) {
    double interest1 = 100, interest2 = 100;
    int i = 1;
    while (true) {
        interest2 = interest2 * pow((1 + 0.05), i);
        interest1 += 10.0;
        if (interest1 > interest2) {
            printf("%lf %lf\n", interest1, interest2);
            i += 1;
        } else {
            break;
        }
    }
    printf("%lf %lf\n", interest1, interest2);
    printf("%d\n", i+1);
    return 0;
}
