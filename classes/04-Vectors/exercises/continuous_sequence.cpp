#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> valores;
	
	while (true) {
		int novo_valor;
		cin >> novo_valor;

		if (novo_valor < 1)
			break;
		
		valores.push_back(novo_valor);
	}

	int num_de_colunas;

	if (valores.size() % 2 == 0)
		num_de_colunas = 2;
	else
		num_de_colunas = 3;

	int num_de_itens = valores.size();
	if (valores.size() % num_de_colunas != 0)
		num_de_itens += num_de_colunas;

	vector<vector<int>> matriz;
	int num_item_iterativo = 0;
	int linha = 0;

	while (num_item_iterativo < num_de_itens) {
		if (num_item_iterativo + num_de_colunas < valores.size()) {

			matriz.insert(matriz.end(), {valores.begin(), valores.begin() + num_de_colunas});

			valores.erase(valores.begin(), valores.begin() + num_de_colunas);
		}

		else { 
			num_item_iterativo += 1;
			vector<int> ultima_linha(valores);

			int quantidade_de_zeros = num_de_colunas - valores.size();
			for (int i = 0; i < quantidade_de_zeros; i++)
				ultima_linha.push_back(0);

			matriz.push_back(ultima_linha);
		}
		num_item_iterativo += num_de_colunas;
	}

	//cout << matriz.at(0).at(1) << " " << matriz.at(1).at(0) << endl;
	//cout << matriz.at(0).at(2) << " " << matriz.at(1).at(2) << endl;

	return 0;
}
