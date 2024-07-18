#include <iostream>
#include <queue>
#include <math.h>

using namespace std;

void pegar_possibilidades(queue<string>& todas_as_possibilidades, int num_desconhecidos);
string gerar_senha(string& senha_criptografada, queue<string>& todas_as_possibilidades, int classificacao);
string pegar_chrs_faltantes(queue<string>& todas_as_possibilidades, int classificacao);
priority_queue<char, vector<char>, greater<char>> gerar_possibilidades_ordenadas(queue<string>& todas_as_possibilidades);

int main() {

	int tamanho_da_senha, num_desconhecidos, num_de_poss;

	cin >> tamanho_da_senha >> num_desconhecidos >> num_de_poss;

	string senha_criptografada;
	cin >> senha_criptografada;

	queue<string> todas_as_possibilidades;
	pegar_possibilidades(todas_as_possibilidades, num_desconhecidos);

	int classificacao;
	cin >> classificacao;

	cout << gerar_senha(senha_criptografada, todas_as_possibilidades, classificacao) << endl;

	return 0;
}

void pegar_possibilidades(queue<string>& todas_as_possibilidades, int num_desconhecidos) {
	for (int i = 0; i < num_desconhecidos; i++) {
		string nova_possibilidade;
		cin >> nova_possibilidade;
		todas_as_possibilidades.push(nova_possibilidade);
	}
}

string gerar_senha(string& senha_criptografada, queue<string>& todas_as_possibilidades, int classificacao) {
	string chrs_faltantes = pegar_chrs_faltantes(todas_as_possibilidades, classificacao);
	string senha = "";
	int i = 0;
	for (char c : senha_criptografada) {
		if (c == '#') {
			senha += chrs_faltantes[i];
			i += 1;
		}
		else {
			senha += c;
		}
	}
	return senha;
}

string pegar_chrs_faltantes(queue<string>& todas_as_possibilidades, int classificacao) {
	string chrs_faltantes;
	int classificacao_garantida = 1;
	while ((classificacao_garantida <= classificacao) and (todas_as_possibilidades.size() > 0)) {
		priority_queue<char, vector<char>, greater<char>> possibilidades_ordenadas = gerar_possibilidades_ordenadas(todas_as_possibilidades);
		int num_desconhecidos = possibilidades_ordenadas.size();
		char tmp_chr = possibilidades_ordenadas.top();
		while (classificacao_garantida + pow(num_desconhecidos, todas_as_possibilidades.size()) <= classificacao) {
			possibilidades_ordenadas.pop();
			tmp_chr = possibilidades_ordenadas.top();
			classificacao_garantida += pow(num_desconhecidos, todas_as_possibilidades.size());
		}
		chrs_faltantes += tmp_chr;
	}
	return chrs_faltantes;
}

priority_queue<char, vector<char>, greater<char>> gerar_possibilidades_ordenadas(queue<string>& todas_as_possibilidades) {
	priority_queue<char, vector<char>, greater<char>> possibilidades_ordenadas;
	for (char c : todas_as_possibilidades.front()) {
		possibilidades_ordenadas.push(c);
	}
	todas_as_possibilidades.pop();
	return possibilidades_ordenadas;
}
