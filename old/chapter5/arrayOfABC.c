#include <stdio.h>

int main(void)
{
    char arrayOfAlphabets[27], i;
    arrayOfAlphabets[26] = '\0';
    int j = 0;
    for (i = 'a', j = 0; i <= 'z'; i++, j++)
    {
        arrayOfAlphabets[j] = i;
    }

    // print arrayOfAlphabets
    for (j = 0; j < 26; j++) {
        printf("The Value at %2d is %2c\n", j, arrayOfAlphabets[j]);
    }
    return 0;
}
