#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
	
	int num_cidades, num_tuneis;
	cin >> num_cidades >> num_tuneis;

	unordered_map<int, unordered_set<int>> cidades;

	for (int i = 0; i < num_tuneis; i++) {
		int cidade_a, cidade_b;
		cin >> cidade_a >> cidade_b;

		cidades[cidade_a].insert(cidade_b);
		cidades[cidade_b].insert(cidade_a);
	}

	int num_de_sugestoes;
	cin >> num_de_sugestoes;
	int aceitas = 0;

	for (int i = 0; i < num_de_sugestoes; i++) {
		int tam_caminho;
		cin >> tam_caminho;

		queue<int> caminho;
		for (int u = 0; u < tam_caminho; u++) {
			int cidade_tmp;
			cin >> cidade_tmp;
			caminho.push(cidade_tmp);
		}

		int anterior = caminho.front();
		caminho.pop();
		bool invalida = false;
		while (caminho.size() != 0) {
			int prox = caminho.front();
			caminho.pop();
			if (cidades[anterior].find(prox) != cidades[anterior].end()) {}
			else {
				invalida = true;
				break;
			}
			anterior = prox;
		}
		if (not invalida)
			aceitas += 1;
	}

	cout << aceitas << endl;

	return 0;
}
