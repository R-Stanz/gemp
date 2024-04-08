#include <iostream>

using namespace std;

int main() {

	long int numerator 	= 245850922;
	long int denominator 	= 78256779;

	for (int i = 0; i < 20; i++){
		long int int_division = numerator / denominator;
		cout << int_division;

		long int shift = 10; 

		numerator = (numerator - int_division * denominator) * shift;
	}

	cout << endl;

	return 0;
}
