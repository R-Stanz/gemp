#include <iostream>

using namespace std;

int fib(int n);

int main() {

	cout << fib(3) << endl;

	return 0;
}

int fib(int n) {
	int arr[n];
	arr[0] = 0;
	arr[1] = 1;

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i-1] + arr[i-2];
	}

	return arr[n-1];
}
