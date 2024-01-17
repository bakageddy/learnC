#include <stdio.h>

void one(void);
void two(void);
void three(void);
void one_three(void);
int main(void) {
    one_three();
    printf("Done!\n");
    return 0;
}

void one_three(void) {
    one();
}

void one(void) {
    printf("One\n");
    two();
}

void two(void) {
    printf("Two\n");
    three();
}

void three(void) {
    printf("Three\n");
}
