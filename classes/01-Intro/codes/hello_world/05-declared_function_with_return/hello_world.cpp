#include <iostream>

using namespace std;

string hello();

int main() {

	cout << hello() << endl;

	return 0;
}

string hello() {
	return "Hello World!";
}
