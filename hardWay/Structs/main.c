#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* name;
	int age;
	int height;
	int weight;
} Person;

Person* person_create(char* name, int age, int height, int weight) {
	Person *p = malloc(sizeof(Person));
	assert(p != NULL);
	p -> name = strdup(name);
	p -> age = age;
	p -> height = height;
	p -> height = height;
	return p;
}

void person_delete(Person* p) {
	free(p -> name);
	free(p);
}

int main(void) {
	char* og = "what";
	char* dup = strdup(og);
	printf("%p\n %p\n", og, dup);

	Person* p = (Person*) NULL;
	(void) p -> name; // What the fuck

	free(dup);
	// free can detect double free and segfault
	// free(dup);
	return 0;
}
