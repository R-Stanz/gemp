#include <iostream>
#include <set>

using namespace std;

int main() {

	set<int> copas;
	bool erro_copas = false;

	set<int> espadas;
	bool erro_espadas = false;

	set<int> ouros;
	bool erro_ouros = false;

	set<int> paus;
	bool erro_paus = false;

	string sequencia;
	cin >> sequencia;

	for (int i = 0; i < sequencia.length(); i++) {
		int valor_da_carta = 10 * (int) sequencia[i];
		i += 1;

		valor_da_carta += (int) sequencia[i];
		i += 1;

		char naipe = (char) sequencia[i];

		if ((naipe == 'C') and (not erro_copas)) {
			if (copas.find(valor_da_carta) == copas.end())
				copas.insert(valor_da_carta);
			else
				erro_copas = true;
		}

		if ((naipe == 'E') and (not erro_espadas)) {
			if (espadas.find(valor_da_carta) == espadas.end())
				espadas.insert(valor_da_carta);
			else
				erro_espadas = true;
		}

		if ((naipe == 'U') and (not erro_ouros)) {
			if (ouros.find(valor_da_carta) == ouros.end())
				ouros.insert(valor_da_carta);
			else
				erro_ouros = true;
		}

		if ((naipe == 'P') and (not erro_paus)) {
			if (paus.find(valor_da_carta) == paus.end())
				paus.insert(valor_da_carta);
			else
				erro_paus = true;
		}
	}

	if (erro_copas)
		cout << "erro" << endl;
	else
		cout << 13 - copas.size() << endl;

	if (erro_espadas)
		cout << "erro" << endl;
	else
		cout << 13 - espadas.size() << endl;

	if (erro_ouros)
		cout << "erro" << endl;
	else
		cout << 13 - ouros.size() << endl;

	if (erro_paus)
		cout << "erro" << endl;
	else
		cout << 13 - paus.size() << endl;

	return 0;
}
