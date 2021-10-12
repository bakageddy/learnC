#include <stdio.h>

int main(void) {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    switch (ch) {
        case 'a':
            printf("Argali, A wild sheep of Asia\n");
            break;
        case 'b':
            printf("Babirusa, A wild pig of Malay\n");
            break;
        case 'c':
            printf("Coati, Racoonlike mammal\n");
            break;
        case 'd':
            printf("Desman, Aquatic, molelike critter\n");
            break;
        case 'e':
            printf("Echidna, The Spiny anteater\n");
            break;
        default:
            printf("That's a stumper\n");
    }
    return 0;
}
