#include <stdio.h>
#define GAL2LIT 3.785
#define MIL2KM 1.609

int main(void) {
    float liters, distanceTravelled;
    printf("Enter Your Consumption of fuel in gallons: ");
    scanf("%f", &liters);
    printf("Enter the Distance Travelled in miles: ");
    scanf("%f", &distanceTravelled);
    liters *= GAL2LIT;
    distanceTravelled *= MIL2KM / 100;
    printf("%f\n", liters / distanceTravelled);

    return 0;
}
