#include <iostream>

using namespace std;

int main() {

	long int numerator 	= 245850922;
	long int denominator 	= 78256779; 

	int count = 0;

	while (count < 20) {
		long int int_division = numerator / denominator;
		cout << int_division;

		long int shift = 10;
		numerator = (numerator - int_division * denominator) * shift;
		count++;
	}

	cout << endl;

	return 0;
}
