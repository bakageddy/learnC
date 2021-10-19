// It's a faulty guesser

#include <stdio.h>

int main(void) {
    int gues = 1;
    printf("Pick an integer from one to hundred, i will try to guess it!");
    printf("If it's a number you guessed press y");
    printf("Uh.. is it %d?\n", gues);
    while (getchar() != 'y')
        printf("I knew it wasn't that, but it's always good to guess!"
                "\n is it %d?\n", gues++);
    printf("I am right at long last!");
    return 0;
}

