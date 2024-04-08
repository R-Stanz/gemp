#include <iostream>
#include <cmath>

using namespace std;

void print_pi(long int numerator = 245850922, long int denominator = 78256779, int count = 1);

int main() {

	print_pi();

	return 0;
}

void print_pi(long int numerator, long int denominator, int count) {

	long int int_division = numerator / denominator;
	cout << int_division;

	long int power = log10(denominator) + 1;
	long int shift = 10;
	long int next_numerator = (numerator - int_division * denominator) * shift;

	if (count < 20) 
		print_pi(next_numerator, denominator, ++count);
	else
		cout << endl;
}
