#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num_de_iter;
	cin >> num_de_iter;

	vector<int> sequencia;
	for (int i = 0; i < num_de_iter; i++) {
		int novo_valor;
		cin >> novo_valor;

		if (novo_valor == 0)
			sequencia.pop_back();
		else
			sequencia.push_back(novo_valor);
	}

	int soma = 0;
	for (int val : sequencia)
		soma += val;

	cout << soma << endl;

	return 0;
}
