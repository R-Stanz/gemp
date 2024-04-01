#include <stdio.h>

void print(char* message);

int main() {

	print("Hello World!");

	return 0;
}

void print(char* message) {
	printf("%s\n", message);
}
