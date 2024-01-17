#include <stdio.h>

int main(void) {
    int a = 1, b = 1;
    int a_post, b_pre;
    a_post = a++;
    b_pre = ++b;
    printf("a\ta_post\tb\tb_pre\n");
    printf("%4d %4d %4d %4d\n", a, a_post, b, b_pre);
    return 0;
}
