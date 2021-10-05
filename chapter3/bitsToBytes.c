#include <stdio.h>

int main(void) {
    float speed, size;
    printf("Enter your network speed in bits/second : ");
    scanf("%f", &speed);
    printf("Enter your file size in mega bytes: ");
    scanf("%f", &size);
    speed /= 8.0;
    printf("Your speed in Mega Bytes / Second: %.2f\n"
            "can download a file of size %.2f"
            "in %.2f seconds!\n", speed, size, size / speed);
    return 0;
}
