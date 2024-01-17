#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

bool is_even(int num);
int main(void) {
    char ch;
    float average1 = 0, average2 = 0;
    int even_ct = 0, odd_ct = 0;
    printf("Enter a number, 0 to quit: ");
    while ((ch = getchar()) != '0') {
        if (is_even((int) ch)) {
            even_ct++;
            average1 += ch - '0';
        } else {
            odd_ct++;
            average2 += ch - '0';
        }
    }
    printf("No. of Odd Numbers: %d\n", odd_ct);
    printf("No. of Even Numbers: %d\n", even_ct);
    printf("Average of Odd Numbers: %f\n", average2/odd_ct);
    printf("Avearge of Even Numbers: %f\n", average1/even_ct);
    return 0;
}

bool is_even(int num) {
    return (num % 2 == 0) ? 1 : 0;
}
