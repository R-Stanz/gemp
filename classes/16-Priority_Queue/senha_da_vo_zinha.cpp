// Time Limit Exceeded

#include <iostream>
#include <queue>

using namespace std;

void gerar_senhas (	priority_queue<string>& senhas, 
			queue<string> todas_as_possibilidades, 
			string& senha_criptografada,
			string senha = "");

int main() {

	int tamanho_da_senha, num_desconhecidos, num_de_poss;

	cin >> tamanho_da_senha >> num_desconhecidos >> num_de_poss;

	string senha_criptografada;
	cin >> senha_criptografada;

	queue<string> todas_as_possibilidades;
	for (int i = 0; i < num_desconhecidos; i++) {
		string nova_possibilidade;
		cin >> nova_possibilidade;
		todas_as_possibilidades.push(nova_possibilidade);
	}

	priority_queue<string> senhas;

	gerar_senhas(senhas, todas_as_possibilidades, senha_criptografada);

	int classificacao;
	cin >> classificacao;
	int remocoes = senhas.size() - classificacao;

	for (int i = 0; i < remocoes; i++) {
		senhas.pop();
	}
	cout << senhas.top() << endl;

	return 0;
}


void gerar_senhas ( 	priority_queue<string>& senhas, 
			queue<string> todas_as_possibilidades, 
			string& senha_criptografada,
			string senha) {

	for (int i = senha.size(); i < senha_criptografada.size(); i++) {
		if (senha_criptografada[i] != '#') {
			senha += senha_criptografada[i];
		}
		else {
			string possibilidades = todas_as_possibilidades.front();
			todas_as_possibilidades.pop();
			for (int u = 0; u < possibilidades.size(); u++) {
				gerar_senhas(   senhas,
						todas_as_possibilidades,
						senha_criptografada,
						senha+possibilidades[u]);
			}
			break;
		}
	}

	if (senha.size() == senha_criptografada.size()) {
		senhas.push(senha);
	}
}
