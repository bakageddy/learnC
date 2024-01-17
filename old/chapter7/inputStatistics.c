#include <stdio.h>
#include <ctype.h>

int main(void) {
    int upper_ct, lower_ct, other_ct;
    upper_ct = lower_ct = other_ct = 0;
    int ch;
    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            upper_ct += 1;
        } else if (islower(ch)) {
            lower_ct += 1;
        } else {
            other_ct += 1;
            continue;
        }
    }
    printf("1. Upper Case Characters: %d\n"
            "2. Lower Case Characters: %d\n"
            "3. Other Characters: %d\n", upper_ct, lower_ct, other_ct);
    return 0;
}
