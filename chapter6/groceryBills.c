#include <stdio.h>
#define ARTICHOKE 2.05
#define BEETS 1.15
#define CARROTS 1.09
#define DISCOUNT 0.05
#define SHIPPING1 6.50
#define SHIPPING2 14.00
#define SHIPPING3 0.50

float getWeight(void);
float calculateValArtichoke(float pounds);
float calculateValBeets(float pounds);
float calculateValCarrots(float pounds);
float discountCalculator(float price);
float shippingCostCalculator(float weight);

int main(void) {
    char ans;
    float weight1, weight2, weight3, value, afterDiscount, totalWeight, finalValue;
    weight1 = weight2 = weight3 = 0, value = 0;
    printf("Enter Something:\na: artichokes\nb: beets\nc: carrots\nq: quit\nEnter: ");
    while ((ans = getchar()) != 'q') {
        switch (ans) {
            case 'a':
                weight1 += getWeight();
                break;
            case 'b':
                weight2 += getWeight();
                break;
            case 'c':
                weight3 += getWeight();
                break;
        }
    }
    totalWeight = weight1 + weight2 + weight3;
    value = calculateValArtichoke(weight1) +
        calculateValBeets(weight2) +
        calculateValCarrots(weight3);
    afterDiscount = discountCalculator(value);
    finalValue = afterDiscount + shippingCostCalculator(totalWeight);
    printf("You Ordered:\n");
    printf("%.2f Pounds of Artichoke costing \t\t%3.2f\n", weight1, calculateValArtichoke(weight1));
    printf("%.2f Pounds of Beets costing \t\t%3.2f\n", weight2, calculateValBeets(weight2));
    printf("%.2f Pounds of Carrots costing \t\t%3.2f\n", weight3, calculateValCarrots(weight3));
    printf("Total Value:\t\t$%3.2f\t Total Weight: %3.2f\n", value, totalWeight);
    printf("After Discount:\t\t$%3.2f\n", afterDiscount);
    printf("Shipping Costs:\t\t$%3.2f\n", shippingCostCalculator(totalWeight));
    printf("Final Value:\t\t$%3.2f\n", finalValue);
    return 0;
}

float getWeight(void) {
    float foo;
    printf("Enter the weight: ");
    scanf("%f", &foo);
    return foo;
}

float calculateValArtichoke(float pounds) {
    return pounds * ARTICHOKE;
}

float calculateValBeets(float pounds) {
    return pounds * BEETS;
}

float calculateValCarrots(float pounds) {
    return pounds * CARROTS;
}

float discountCalculator(float price) {
    return (price >= 100.0) ? price * DISCOUNT : price;
}

float shippingCostCalculator(float weight) {
    float cost = 0;
    if (weight <= 5.0) {
        cost = SHIPPING1;
    } else if (weight < 20.0) {
        cost = SHIPPING2;
    } else if (weight >= 20.0) {
        cost = SHIPPING2 + ((weight - 20.0f) * SHIPPING3);
    }
    return cost;
}
