#include <stdio.h>

void ic(void);
void br(void);

int main(void) {
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    printf("\n");
    return 0;
}

void ic(void) {
    printf("India, China");
}

void br(void) {
    printf("Brazil, Russia");
}
