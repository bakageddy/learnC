#include <stdio.h>
#include <string.h>

int main(void) {
    char word[21];
    printf("Enter a word: ");
    scanf("%s", word);
    for (int i = strlen(word); i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}
