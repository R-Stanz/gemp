#include <stdio.h>

char* hello();

int main() {

	printf("%s", hello());

	return 0;
}

char* hello() {
	return "Hello Wolrd!\n";
}
