#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void) {
    const char *mytalents[LIM] = {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing Data",
        "Following Instructions to the Letter",
        "Understanding the C Language"
    };
    char yourtalents[LIM][SLEN] = {
        "Walking in a straight line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };
    int i;
    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    return 0;
}
