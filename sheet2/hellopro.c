#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void greet_tutor(char* name, unsigned long mat_number) {
	printf("Greetings to the world's best tutor!\n");
	printf("My name is %s and my matriculation number is %lu.", name, mat_number);
}

int main(int argc, char* argv[]) {
	// check for help request
	if(argc == 2 && !strcmp(argv[1], "--help")) {
		printf("Usage:\n");
		printf("\t%s <name> <matriculation number>", argv[0]);
		return 0;
	}
	// use arguments if exist, otherwise ask for user input
	if(argc == 3) {
		greet_tutor(argv[1], strtoul(argv[2], NULL, 10));
	} else {
		// get user input
		char name[21];
		unsigned long mat_number;
		printf("Enter your name: ");
		scanf("%20s", name);
		fflush(stdin);
		printf("Enter your matriculation number: ");
		scanf("%lu", &mat_number);
		// additional blank line
		printf("\n");
		greet_tutor(name, mat_number);
	}
	return 0;
}
