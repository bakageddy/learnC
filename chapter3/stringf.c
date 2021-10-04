#include <stdio.h>
#define BLURB "Authenthic Imitation"

int main(void) {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.9s]\n", BLURB); // Padding of size 24, and prints only the 
                                // first five chars of the string.
    printf("[%-24.9s]\n", BLURB); // Same as above but left sided
    return 0;
}
