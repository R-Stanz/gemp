#include <iostream>

using namespace std;

int fibonacci_operations(int n);

int main() {

	fibonacci_operations(7);
	cout << endl;

	return 0;
}

int fibonacci_operations(int n) {
	if (n <= 2) {
		return 1;
	}
	
	int penultimo = fibonacci_operations(n-1);
	int ultimo = fibonacci_operations(n-2);

	int num = ultimo + penultimo;
	cout << "Para n = " << n << " ==>\t" << ultimo << " + " << penultimo << " = " << num << endl;
	return num;
}
