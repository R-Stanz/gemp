#include <iostream>
#include <cmath>

using namespace std;

void print_pi(long int numerator = 245850922, long int denominator = 78256779);

int main() {

	print_pi();

	return 0;
}

void print_pi(long int numerator, long int denominator) {

	long int int_division = numerator / denominator;
	cout << int_division;

	long int power = log10(denominator) + 1;
	long int shift = powl(10, power);
	long int next_numerator = (numerator - int_division * denominator) * shift;
	print_pi(next_numerator, denominator);
}
