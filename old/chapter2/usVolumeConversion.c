#include <stdio.h>

int main(void) {
    float cups, ounces, teaspoons, tablespoons, pint;
    printf("Enter the amount of cups: ");
    scanf("%f", &cups);
    pint = cups / 2.0;
    ounces = cups * 8.0;
    tablespoons = ounces * 2;
    teaspoons = tablespoons * 3;
    printf("The Amount of Pints in %f cups is %f\n", cups, pint);
    printf("The Amount of Ounces in %f cups is %f\n", cups, ounces);
    printf("The Amount of Tablespoons in %f cups is %f\n", cups, tablespoons);
    printf("The Amount of Teaspoons in %f cups is %f\n", cups, teaspoons);
    return 0;
}
