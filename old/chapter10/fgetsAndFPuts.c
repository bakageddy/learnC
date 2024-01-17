#include <stdio.h>
#define STLEN 14

int main(void) {
    char words[STLEN];
    const char *output = "Enter a string, please: ";
    puts(output);
    fgets(words, STLEN, stdin);
    puts(words);
    fputs(words, stdout);
    return 0;
}
