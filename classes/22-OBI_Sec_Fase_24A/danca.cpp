#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> pegar_posicoes_finais(int num_de_linhas, int num_de_colunas, int num_de_passos);
vector<int> range(int limite);
void print(vector<vector<int>>& posicoes);

int main() {

	int num_de_linhas, num_de_colunas, num_de_passos;
	cin >> num_de_linhas >> num_de_colunas >> num_de_passos;

	vector<vector<int>> posicoes = pegar_posicoes_finais(num_de_linhas, num_de_colunas, num_de_passos);
	print(posicoes);

	return 0;
}

vector<vector<int>> pegar_posicoes_finais(int num_de_linhas, int num_de_colunas, int num_de_passos) {
	vector<int> pos_colunas = range(num_de_colunas);
	vector<int> pos_linhas = range(num_de_linhas);

	for (int i = 0; i < num_de_passos; i++) {
		char opcao;
		int pos_a, pos_b;
		cin >> opcao >> pos_a >> pos_b;
		pos_a -= 1;
		pos_b -= 1;

		if (opcao == 'C') {
			int tmp = pos_colunas.at(pos_a);
			pos_colunas.at(pos_a) = pos_colunas.at(pos_b);
			pos_colunas.at(pos_b) = tmp;
		}
		else {
			int tmp = pos_linhas.at(pos_a);
			pos_linhas.at(pos_a) = pos_linhas.at(pos_b);
			pos_linhas.at(pos_b) = tmp;
		}
	}

	vector<vector<int>> posicoes_finais(num_de_linhas);
	for (int i = 0; i < num_de_linhas; i++) {
		vector<int>& linha_final = posicoes_finais.at(i);
		int linha = pos_linhas.at(i);
		for (int coluna : pos_colunas) {
			int posicao = (linha*num_de_colunas) + coluna + 1;
			linha_final.push_back(posicao);
		}
	}
	return posicoes_finais;
}

vector<int> range(int limite) {
	vector<int> range;
	for (int i = 0; i < limite; i++) {
		range.push_back(i);
	}
	return range;
}

void print(vector<vector<int>>& posicoes) {
	for (vector<int>& linha : posicoes) {
		for (int& pos : linha) {
			cout << pos << " ";
		}
		cout << endl;
	}
}
