#include <stdio.h>


int average(int n1, int n2);
int main(void) {
    int guess = 50, lower = 0, upper = 100;
    int goodEnough;
    do {
        printf("Is it %d\?\n", guess);
        printf("Lower ('l') or Upper ('u') or Quit ('y'): ");
        goodEnough = getchar();
        if (goodEnough == 'l') {
            lower = guess;
            guess = average(guess, upper);
        } else if (goodEnough == 'u') {
            upper = guess;
            guess = average(guess, lower);
        }
    }
    while (goodEnough != 'y');
    return 0;
}


int average(int n1, int n2) {
    return (n1 + n2) / 2;
}
