#include <stdio.h>

#define OVER 1.50
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25

double returnRate(char choice);
double calculateGross(double rate, double hours);
double calculateTaxes(double gross);

int main(void) {
    double rate, hoursWorked, grossPay, taxes, afterTaxes, netPay;
    int choice;
    do {
        printf("Choice:\n"
                "a. $8.75/hr\t\tb. $9.33/hr\n"
                "c. $10.00/hr\t\te. $11.20/hr\n"
                "f. quit\n");
        choice = getchar();
        rate = returnRate(choice);
        if (rate != -1) {
            printf("How much hours did you work?: ");
            scanf("%lf", &hoursWorked);
            grossPay = calculateGross(rate, hoursWorked);
            taxes = calculateTaxes(grossPay);
            netPay = grossPay - taxes;
            printf("After Taxes, your pay is %.3lf\n"
                    "Your Gross Pay is %.2lf\n"
                    "Your Net Pay is %.2lf - %.2lf = %.2lf\n", netPay, grossPay, grossPay, taxes, netPay);
        } else {
            break;
        }
    } while (rate != -1.0);
    return 0;
}

double returnRate(char choice) {
    double rate = 0;
    switch (choice) {
        case 'a':
            rate = 8.75;
            break;
        case 'b':
            rate = 9.33;
            break;
        case 'c':
            rate = 10.00;
            break;
        case 'd':
            rate = 11.20;
            break;
        default:
            rate = -1.0;
            break;
    }
    return rate;
}

double calculateGross(double rate, double hours) {
    double grossPay;
    double overTime = (hours - 40.0) * OVER;
    if (hours > 40.0) {
        grossPay = rate * (overTime + hours);
    } else {
        grossPay = rate * hours;
    }
    return grossPay;
}

double calculateTaxes(double gross) {
    double taxes;
    if (gross <= 300.0) {
        taxes = gross * TAX1;
    } else if ((gross < 450.0) && (gross > 300.0)) {
        taxes = (300.0 * TAX1) + (gross - 300.0) * TAX2;
    } else {
        taxes = (300.0 * TAX1) + ((gross - 300.0) * TAX2) + ((gross - 450) * TAX3);
    }
    return taxes;
}
