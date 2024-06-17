#include <iostream>

using namespace std;

void print(int tmp = 1, int end = 10);

int main() {
	
	print();

	return 0;
}

void print(int tmp, int end) {

	if (tmp <= end) {
		cout << tmp << " ";
		return print(tmp + 1, end);
	}

	// So ocorre na ultima iteracao
	cout << endl;
}
