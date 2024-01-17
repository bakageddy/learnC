#include <stdio.h>

void print_this(char* str) {
	printf("%s\n", str);
}

void print_array_faulty(int args[10]) {
	for (int i = 0; i < 10; i++) {
		printf("%d\n", args[i]);
	}
}

int main(int argc, char* argv[]) {
	printf("Hey mame!\n");
	print_this(argv[1]);
	int arr[] = {1, 2, 3, 4, 5};

	// Segfault, using 40 bytes of a region with 20 bytes
	print_array_faulty(arr);
	return 0;
}
