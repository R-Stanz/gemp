#include <iostream>

using namespace std;

int hash_da_linha(int linha, string str, int pos = 0, int hash = 0);

int main() {

	int num_de_testes;
	cin >> num_de_testes;
	int resultados[num_de_testes]{0};

	for (int k = 0; k < num_de_testes; k++) {
		int num_de_linhas;
		cin >> num_de_linhas;

		for (int linha = 0; linha < num_de_linhas; linha++) {
			string str;
			cin >> str;

			resultados[k] += hash_da_linha(linha, str);
		}
	}

	for (int i : resultados)
		cout << i << endl;

	return 0;
}

int hash_da_linha(int linha, string str, int pos, int hash) {
	if (str.length() > pos) {
		hash += (int) str[pos] - (int) 'A' + linha + pos;
		return hash_da_linha(linha, str, pos + 1, hash);
	}
	return hash;
}
