#include <stdio.h>
#include <math.h>

_Bool good_enough(double guess, double number);
double average(double a, double b );
double improve(double guess, double number);

int main(void) {
    double number, guess = 1;
    printf("Enter a number: ");
    scanf("%lf", &number);
    while (!good_enough(guess, number)) {
        guess = improve(guess, number);
    }
    printf("and it's square root is %lf\n", guess);
}

_Bool good_enough(double guess, double number) {
    return (fabs(number - (guess * guess)) <= 0.000001);
}

double average(double a, double b) {
    return (a + b) / 2;
}

double improve(double guess, double number) {
    return (average(guess, (number/guess)));
}
