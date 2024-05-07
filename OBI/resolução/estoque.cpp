#include <iostream>

using namespace std;

int main() {

	int num_de_tipos;
	cin >> num_de_tipos;

	int num_de_tam;
	cin >> num_de_tam;

	int estoque[num_de_tipos][num_de_tam];

	for (int tipo = 0; tipo < num_de_tipos; tipo++) {
		for (int tam = 0; tam < num_de_tam; tam++) {
			cin >> estoque[tipo][tam];
		}
	}

	int qtd_de_pedidos;
	cin >> qtd_de_pedidos;

	int count_vendas = 0;

	for (int i = 0; i < qtd_de_pedidos; i++) {
		int tipo;
		cin >> tipo;

		int tam;
		cin >> tam;

		if (estoque[tipo-1][tam-1] > 0) {
			//estoque[tipo-1][tam-1]--;
			estoque[tipo-1][tam-1] -= 1;
			count_vendas += 1;
		}
	}
	cout << count_vendas << endl;

	return 0;
}
