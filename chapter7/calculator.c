#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159262

float add(float n1, float n2);
float sub(float n1, float n2);
float divide(float n1, float n2);
float mul(float n1, float n2);
void calculate(char userChoice, float n1, float n2);
int main(void) {
    float operand1, operand2, result;
    char choice;
    do {
        printf("Enter a operation of your choice:\n"
               "a. add                  s. subtract\n"
               "m. multiply             d. divide\n"
               "q. quit\n"
               "Your Choice: ");
        fflush(stdout);
        scanf("%c", &choice);
        printf("\nPlease Enter a number: ");
        scanf("%f", &operand1);
        printf("Please Enter another number: ");
        scanf("%f", &operand2);
        calculate(choice, operand1, operand2);
    } while (choice != 'q');
    return 0;
}

float add(float n1, float n2) {
    return n1 + n2;
}

float sub(float n1, float n2) {
    return n1 - n2;
}

float divide(float n1, float n2) {
    if (n2 == 0) {
        return 0;
    } else {
        return n1 / n2;
    }
}

float mul(float n1, float n2) {
    return n1 * n2;
}

void calculate(char userChoice, float n1, float n2) {
    float result;
    switch (userChoice) {
        case 'a':
            result = add(n1, n2);
            printf("%f + %f = %f\n", n1, n2, result);
            break;
        case 's':
            result = sub(n1, n2);
            printf("%f - %f = %f\n", n1, n2, result);
            break;
        case 'm':
            result = mul(n1, n2);
            printf("%f * %f = %f\n", n1, n2, result);
            break;
        case 'd':
            if (n2 == 0) {
                printf("Enter a number other than 0:");
                scanf("%f", &n2);
                result = divide(n1, n2);
            } else {
                result = divide(n1, n2);
                printf("%f / %f = %f\n", n1, n2, result);
            }
            break;
        default:
            result = PI;
    }
}
