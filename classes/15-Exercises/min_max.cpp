#include <iostream>

using namespace std;

int min_soma(int soma_alvo, int ini_intervalo, int fim_intervalo);
int max_soma(int soma_alvo, int ini_intervalo, int fim_intervalo);
int soma_dos_digitos(int num);

int main() {

	int soma_alvo;
	cin >> soma_alvo;

	int ini_intervalo, fim_intervalo;
	cin >> ini_intervalo >> fim_intervalo;

	cout << min_soma(soma_alvo, ini_intervalo, fim_intervalo) << endl;
	cout << max_soma(soma_alvo, ini_intervalo, fim_intervalo) << endl;

	return 0;
}


int min_soma(int soma_alvo, int ini_intervalo, int fim_intervalo) {
	for (int i = ini_intervalo; i <= fim_intervalo; i++) {
		if (soma_alvo == soma_dos_digitos(i)) {
			return i;
		}
	}
	return 0;
}

int max_soma(int soma_alvo, int ini_intervalo, int fim_intervalo) {
	for (int i = fim_intervalo; i >= ini_intervalo; i--) {
		if (soma_alvo == soma_dos_digitos(i)) {
			return i;
		}
	}
	return 0;
}

int soma_dos_digitos(int num) {
	int soma = 0;
	while (num != 0) {
		soma += num % 10;
		num /= 10;
	}
	return soma;
}
