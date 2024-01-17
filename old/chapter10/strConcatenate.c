#include <stdio.h>
#include <string.h>
#define SIZE 60

int main(void) {
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favorite flower?");

    if (fgets(flower, SIZE, stdin)) {
        strcat(flower, addon);
        puts(flower);
    } else
        puts("End of file encountered!");
    puts("Bye..");
    return 0;
}
