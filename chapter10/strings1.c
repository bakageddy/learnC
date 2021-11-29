#include <stdio.h>
#define MSG "I am a symbolic string constant"
#define MAXLENGTH 30

int main(void) {
    char words[MAXLENGTH] = "I am string in a array";
    const char * foo = "Another thing is pointing at me";
    /* char auto[] = "Hi I am Dinesh Kumar"; */
    const char* pt1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(pt1);
    words[8] = 'p';
    puts(words);
    return 0;
}
