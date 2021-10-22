#include <stdio.h>
#include <ctype.h>

int characterAlphabetPos(char* character);
int main(void) {
    int chara;
    int* ptr1;
    while (chara != EOF) {
        chara = getchar();
        ptr1 = &chara;
        printf("%c: ", chara);
        printf("%d\n", characterAlphabetPos((char*) ptr1));
    }
    return 0;
}

int characterAlphabetPos(char* character) {
    int this;
    if (!(isalpha(*character))) {
        return -1;
    } else {
        *character = tolower(*character);
        this = *character - 96; // Returns the alphabet posistion. a: 1, b: 2 ....
        return this;
    }
}
