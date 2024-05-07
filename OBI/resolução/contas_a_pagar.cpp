#include <iostream>

using namespace std;

int main() {

	int valor;
	cin >> valor;

	int contas[3];

	for (int& val : contas)
		cin >> val;

	for (int i = 0; i < 2; i++) {
		for (int u = 0; u < 2 - i; u++) {
			if (contas[u] > contas[u+1]) {
				int tmp = contas[u];
				contas[u] = contas[u+1];
				contas[u+1] = tmp;
			}
		}
	}

	int count_contas_pagas = 0;
	for (int conta : contas) {
		if (valor - conta >= 0) {
			valor -= conta;
			count_contas_pagas += 1;
		}
	}

	cout << count_contas_pagas << endl;

	return 0;
}
