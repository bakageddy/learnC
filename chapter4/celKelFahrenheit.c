#include <stdio.h>

void temperatures(double value);
int main(void) {
    double temperature;
    printf("Enter a temperature in fahrenheit: ");
    while (scanf("%lf", &temperature) == 1) {
        temperatures(temperature);
        printf("Enter a temperature in fahrenheit (q to quit): ");
    }
}

void temperatures(double value) {
    const double celRatio = 5.0/9.0;
    const double kelAdd = 273.16;
    double celsius, kelvin;
    celsius = (value - 32.0) * celRatio;
    kelvin = celsius + kelAdd;
    printf("Fahrenheit: %.2lf\n"
            "Celsius: %.2lf\n"
            "Kelvin: %.2lf\n",
            value, celsius, kelvin);
}
