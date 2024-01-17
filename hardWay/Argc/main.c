#include <stdio.h>

int main(int argc, char** argv) {
	// breaks other elements for some reason
	// argv[0] = "Why does it break?\n";
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}

	char* states[] = {
		"Dinesh"
		"Kumar",
		"is",
		// NULL,
		"Bakageddy",
	};

	// printf("This will segfault!\n");
	// printf("%s\n", NULL);
	
	// This will also segfault
	// Because i am going out of bounds

	for (int i = 0; i < 5; i++) {
		printf("%s\n", states[i]);
	}
	return 0;
}
