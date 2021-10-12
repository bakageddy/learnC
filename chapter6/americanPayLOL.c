// Forgive me, I don't know how taxes work
// I just assumed it works like this.

#include <stdio.h>
#define TAXRATE1 0.15
#define TAXRATE2 0.2
#define TAXRATE3 0.25
#define PAYRATE 10.00 // Per Hour, shit that's better than what my mom earns,
                      // Atleast we ain't getting $500 insulin shots lol.
#define OVERTIME 1.5

float gross_pay_calc(float hours);
float afterTaxes(float gross_pay);
int main(void) {
    float hours_worked = 0, gross_pay = 0, net_pay = 0, tax;
    printf("Enter the amount of hours you worked: ");
    scanf("%f", &hours_worked);
    gross_pay = gross_pay_calc(hours_worked);
    tax = afterTaxes(gross_pay);
    net_pay = gross_pay - tax;
    printf("Your Gross Salary is %f\n", gross_pay);
    printf("Your Net Salary is %f\n", net_pay);
    return 0;
}

float gross_pay_calc(float hours) {
    float gross_pay;
    if (hours <= 40) {
        gross_pay = hours * PAYRATE;
    } else if (hours > 40) {
        gross_pay = hours * PAYRATE +
            (hours - 40) * OVERTIME; // Calculate it for overtime.
    }
    return gross_pay;
}
float afterTaxes(float gross_pay) {
    float amnt;
    if (gross_pay <= 300) {
        amnt = gross_pay * TAXRATE1;
    } else if (gross_pay > 300 && gross_pay <= 450) {
        amnt = (300 * TAXRATE1) +
            (gross_pay - 300) * TAXRATE2; // Get The Slab Amount Totally
    } else if (gross_pay > 450) {
        amnt = (300 * TAXRATE1) +
            (gross_pay - 300) * TAXRATE2 +
            (gross_pay - 450) * TAXRATE3; // Get the outmost slab amount.
    }
    return amnt;
}
