#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

void pegar_possibilidades(vector<vector<char>>& possibilidades);
void ordenar_possibilidades(vector<vector<char>>& possibilidades);
string decifrar_senha(vector<vector<char>>& possibilidades, int poss_desejada, string& senha_cript);
void adicionar_chrs_limpos(string& senha, string& senha_cript);

int main() {

	int tam_senha, num_chrs_desc, num_de_pos;
	cin >> tam_senha >> num_chrs_desc >> num_de_pos;

	string senha_cript;
	cin >> senha_cript;

	vector<vector<char>> possibilidades(num_chrs_desc);
	pegar_possibilidades(possibilidades);
	ordenar_possibilidades(possibilidades);

	int poss_desejada;
	cin >> poss_desejada;

	cout << decifrar_senha(possibilidades, poss_desejada, senha_cript) << endl;

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

string decifrar_senha(vector<vector<char>>& possibilidades, int poss_desejada, string& senha_cript) {
	int poss_garantida = 1;
	int marcador_senha = 0;

	int num_de_poss_por_linha = possibilidades.at(0).size();
	string senha = "";
	for (int nivel_de_poss = 0; nivel_de_poss < possibilidades.size(); nivel_de_poss++) {

		adicionar_chrs_limpos(senha, senha_cript);

		int niveis_abaixo = (possibilidades.size() - 1) - nivel_de_poss;
		int incremento_por_poss_no_nivel = pow(num_de_poss_por_linha, niveis_abaixo);

		int poss_no_nivel = (poss_desejada - poss_garantida) / incremento_por_poss_no_nivel;
		poss_garantida += poss_no_nivel * incremento_por_poss_no_nivel;

		vector<char>& nivel =  possibilidades.at(nivel_de_poss);
		senha += nivel.at(poss_no_nivel);
	}

	adicionar_chrs_limpos(senha, senha_cript);

	return senha;
}

void adicionar_chrs_limpos(string& senha, string& senha_cript) {
	while ((senha.size() < senha_cript.size()) and (senha_cript[senha.size()] != '#')) {
		senha += senha_cript.at(senha.size());
	}
}
