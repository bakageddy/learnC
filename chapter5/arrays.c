#include <stdio.h>

int main(void) {
    int teamScore[11];
    for (int i = 0; i < (sizeof(teamScore)/ sizeof(int)); i++)
    {
        printf("Enter a number at posistion %d: ", i);
        scanf("%d", &teamScore[i]);
    }
    for (int j = 0; j < (sizeof(teamScore)/sizeof(int)); j++)
    {
        printf("The Element at posistion %d is %d\n", j, teamScore[j]);
    }
    return 0;
}
