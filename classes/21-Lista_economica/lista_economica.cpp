// URI / Beecrowd => 1211

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> pegar_e_organizar_lista(int qtd_de_tel);
int contagem_de_memoria_salva(vector<string> lista);
int medir_prefixo(string num, string num_anterior);

int main() {
	int qtd_de_tel;
	while (cin >> qtd_de_tel) {
		vector<string> lista = pegar_e_organizar_lista(qtd_de_tel);
		cout << contagem_de_memoria_salva(lista) << endl;
	}
}

vector<string> pegar_e_organizar_lista(int qtd_de_tel) {
	vector<string> lista_organizada(qtd_de_tel);
	for (string& num : lista_organizada) {
		cin >> num;
	}
	sort(lista_organizada.begin(), lista_organizada.end());

	return lista_organizada;
}

int contagem_de_memoria_salva(vector<string> lista) {
	int memoria_salva = 0;
	for (int i = 1; i < lista.size(); i++) {
		string& num_anterior = lista.at(i-1);
		string& num = lista.at(i);
		memoria_salva += medir_prefixo(num, num_anterior);
	}
	return memoria_salva;
}

int medir_prefixo(string num, string num_anterior) {
	int tam_prefixo = 0;
	while ((tam_prefixo < num.size()) && (num.at(tam_prefixo) == num_anterior.at(tam_prefixo))) {
		tam_prefixo += 1;
	}
	return tam_prefixo;
}
