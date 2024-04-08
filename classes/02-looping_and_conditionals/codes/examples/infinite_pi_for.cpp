#include <iostream>
#include <cmath>

using namespace std;

int main() {

	long int numerator 	= 245850922;
	long int denominator 	= 78256779;

	for (;true;){
		long int int_division = numerator / denominator;
		cout << int_division;

		long int power = log10(denominator) + 1;
		long int shift = pow(10, power);

		numerator = (numerator - int_division * denominator) * shift;
	}

	return 0;
}
