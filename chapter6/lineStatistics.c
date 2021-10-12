#include <stdio.h>
#include <ctype.h>

int main(void) {
    int space_ct = 0, newline_ct = 0, alphabets_ct = 0;
    char ch;
    printf("Enter a line/stream, # to stop: ");
    while ((ch = getchar()) != '#') {
        if (isalpha(ch)) {
            alphabets_ct++;
        } else if (ch == ' ') {
            space_ct++;
        } else if (ch == '\n') {
            newline_ct++;
        } else {
            continue;
        }
    }
    printf("Alphabets: %d\nNewlines: %d\nSpaces: %d\n", 
            alphabets_ct, newline_ct, space_ct);
    return 0;
}
