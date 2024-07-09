#include <iostream>

using namespace std;

void constrir_ls(int* ls, int tam_da_ls);
int count_operacoes(int* ls, int tam_ls);

int main() {

	int tam_ls;
	cin >> tam_ls;

	int ls[tam_ls];
	constrir_ls(ls, tam_ls);

	cout << count_operacoes(ls, tam_ls) << endl;

	return 0;
}

void constrir_ls(int* ls, int tam_da_ls) {
	for (int i = 0; i < tam_da_ls; i++) {
		cin >> ls[i];
	}
}

int count_operacoes(int* ls, int tam_ls) {
	int num_de_operacoes = 0;

	int ponteiro_esq = 0;
	int ponteiro_dir = tam_ls - 1;

	while (ponteiro_esq < ponteiro_dir) {
		if (ls[ponteiro_esq] == ls[ponteiro_dir]) {
			ponteiro_esq += 1;
			ponteiro_dir -= 1;
		}
		else if (ls[ponteiro_esq] < ls[ponteiro_dir]) {
			num_de_operacoes += 1;
			ls[ponteiro_esq + 1] += ls[ponteiro_esq];
			ponteiro_esq += 1;
		}
		else {
			num_de_operacoes += 1;
			ls[ponteiro_dir - 1] += ls[ponteiro_dir];
			ponteiro_dir -= 1;
		}
	}

	return num_de_operacoes;
}
