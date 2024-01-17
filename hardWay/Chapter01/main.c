#include <stdio.h>

int main(int argc, char* argv[]) {
	int numbers[4] = {0};
	char name[4] = {'a', 'd', 'd', 'x'};
	printf("%d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
	printf("%c %c %c %c\n", name[0], name[1], name[2], name[3]);

	printf("%s\n", (char*) name);
	char *another_name = "Dinesh";
	for (size_t i = 0; i < 7; i++) {
		printf("%c ", another_name[i]);
	}

	char full_name[] = {
		'd', 'i', 'n', 'e', 's', 'h',
		'k', 'u', 'm', 'a', 'r', '.', 'g',
	};
	printf("%s\n", full_name);

	return 0;
}
