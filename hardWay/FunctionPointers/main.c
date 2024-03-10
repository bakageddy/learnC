#include <stdio.h>

typedef float (*mag)(float a, float b);

typedef struct {
	float x;
	float y;
	mag magnitudef;
} Complex;

float magnitude(float a, float b) {
	return (a * a) + (b * b);
}

Complex CreateComplex(float a, float b) {
	return (Complex) {
		.x = a,
		.y = b,
		.magnitudef = magnitude,
	};
}

int main(void) {
	Complex i = CreateComplex(0.0f, 1.0f);
	char *funcbody = (char *) magnitude;
	for (int i = 0; i < 25; i++) {
		printf("%02x:", funcbody[i]);
	}
	printf("\n");
	return 0;
}
