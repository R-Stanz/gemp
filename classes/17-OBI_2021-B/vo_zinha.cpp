#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void pegar_possibilidades(vector<vector<char>>& possibilidades);
void ordenar_possibilidades(vector<vector<char>>& possibilidades);
void decifrar_senha(vector<vector<char>>& possibilidades, int poss_desejada, string& senha);

int main() {

	int tam_senha, num_chrs_desc, num_de_pos;
	cin >> tam_senha >> num_chrs_desc >> num_de_pos;

	string senha;
	cin >> senha;

	vector<vector<char>> possibilidades(num_chrs_desc);
	pegar_possibilidades(possibilidades);

	ordenar_possibilidades(possibilidades);

	int poss_desejada;
	cin >> poss_desejada;

	decifrar_senha(possibilidades, poss_desejada, senha);
	cout << senha << endl;

	return 0;
}

void pegar_possibilidades(vector<vector<char>>& possibilidades) {
	for (vector<char>& linha : possibilidades) {
		string tmp;
		cin >> tmp;
		for (char& letra : tmp) {
			linha.push_back(letra);
		}
	}
}

void ordenar_possibilidades(vector<vector<char>>& possibilidades) {
	for (vector<char>& i : possibilidades) {
		sort(i.begin(), i.end());
	}
}

void decifrar_senha(vector<vector<char>>& possibilidades, int poss_desejada, string& senha) {
	int poss_garantida = 1;

	int marcador_senha = 0;

	int marcador_linha = 0;
	int marcador_chr = 0;

	int num_de_poss_por_linha = possibilidades.at(0).size();
	while ((poss_garantida <= poss_desejada) and (marcador_linha < possibilidades.size())) {

		int num_linhas_abaixo = possibilidades.size() - (marcador_linha + 1);
		int incremento = pow(num_de_poss_por_linha, num_linhas_abaixo);

		if (poss_garantida + incremento <= poss_desejada) {	
			marcador_chr += 1;
			poss_garantida += incremento;
		}
		else {
			while (senha.at(marcador_senha) != '#') {
				marcador_senha += 1;
			}
			senha.at(marcador_senha) = possibilidades.at(marcador_linha).at(marcador_chr);
			marcador_senha += 1;

			marcador_chr = 0;
			marcador_linha += 1;
		}
	}
}
