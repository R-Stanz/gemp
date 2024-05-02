#include <iostream>
#include <vector>

using namespace std;

int main() {
	int novo_num;
	vector<int> numeros;

	while (novo_num >= 0) {
		cin >> novo_num;
		if (novo_num > 0)
			numeros.push_back(novo_num);
	}

	int pares = 0;
	for (int val : numeros) {
		if (val % 2 == 0)
			++pares;
	}

	cout << "Quantidade de pares: " << pares << endl;

	return 0;
}
