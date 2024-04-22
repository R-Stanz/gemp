#include <iostream>
using namespace std;

int main() {
	int mes_inicial = 4;
	int mes_final = 7;
	int total_meses_de_pobi = mes_final - mes_inicial;

	int max_segundas_por_mes = 5;
	int max_alunos = 20;

	string presenca_mes_encontro_aluno[total_meses_de_pobi][max_segundas_por_mes][max_alunos]; 

	// string (*presenca_primeiro_encontro) = presenca_mes_encontro_aluno[0][0]
	
	string (*presenca_primeiro_mes)[max_alunos] = presenca_mes_encontro_aluno[0];
	string (*presenca_primeiro_encontro) = presenca_primeiro_mes[0];

	for (int i = 0; i < max_alunos; i++) {
		string novo_nome;
		getline(cin, novo_nome);

		if (novo_nome == "fim")
			break;

		presenca_primeiro_encontro[i] = novo_nome;
	}

	for (int i = 0; i < max_alunos; i++) {
		string nome = presenca_primeiro_encontro[i];

		if (nome == "")
			break;

		cout << nome << endl;
	}

	return 0;
}
