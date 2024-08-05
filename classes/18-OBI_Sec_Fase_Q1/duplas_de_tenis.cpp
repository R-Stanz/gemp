#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void receber_valores(vector<int>& niveis);
int calcular_a_diferenca(vector<int>& niveis);

int main() {
	vector<int> niveis;
	receber_valores(niveis);

	sort(niveis.begin(), niveis.end());

	cout << calcular_a_diferenca(niveis) << endl;
}

void receber_valores(vector<int>& niveis) {
	for (int i = 0; i < 4; i++) {
		int nivel_tmp;
		cin >> nivel_tmp;
		niveis.push_back(nivel_tmp);
	}
}

int calcular_a_diferenca(vector<int>& niveis) {
	int melhor_dupla = niveis.at(0) + niveis.at(3);
	int pior_dupla = niveis.at(1) + niveis.at(2);

	int menor_diferenca = melhor_dupla - pior_dupla;

	if (menor_diferenca < 0) {
		return -menor_diferenca;
	}
	return menor_diferenca;
}
