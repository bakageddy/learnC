#include <stdio.h>
#define UPPERLIMIT 10

void range(int n);
int main(void) {
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    range(input);
    return 0;
}

void range(int n) {
    int upper = n + UPPERLIMIT;
    while (n++ != upper) {
        printf("%d\n", n);
    }
}
