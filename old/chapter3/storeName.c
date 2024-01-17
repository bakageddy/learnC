#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void) {
    char name[40];
    printf("What's your name: ");
    scanf("%s", name); // You don't need to specify the & character for strings.
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name %s, occupies %zd bytes in memory"
            "and is %zd bytes in long\n", name, sizeof name, strlen(name));
    return 0;

}
