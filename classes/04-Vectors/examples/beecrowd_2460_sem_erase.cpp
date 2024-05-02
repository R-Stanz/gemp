#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num_pessoas_fila;
	cin >> num_pessoas_fila;

	vector<int> fila(num_pessoas_fila);
	for (int i = 0; i < num_pessoas_fila; i++)
		cin >> fila.at(i);

	int num_pessoas_que_sairam;
	cin >> num_pessoas_que_sairam;

	vector<int> sairam_da_fila(num_pessoas_que_sairam);
	for (int i = 0; i < num_pessoas_que_sairam; i++)
		cin >> sairam_da_fila.at(i);

	for (int identificador : fila) {
		bool estah_na_fila = true;
		
		for (int saiu_id : sairam_da_fila) {
			if (identificador == saiu_id) {
				estah_na_fila = false;
				break;
			}
		}
		if (estah_na_fila)
			cout << identificador << " ";
	}
	cout << endl;

	return 0;
}
