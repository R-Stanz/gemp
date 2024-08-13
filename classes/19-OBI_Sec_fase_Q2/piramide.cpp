#include <iostream>
#include <vector>

using namespace std;

int main() {
	int tam_base;
	cin >> tam_base;

	int metade_base = (tam_base - 1) / 2;
	
	vector<vector<int>> piramide(tam_base);
	int linha_count = 0;

	int segunda_metade_count = metade_base + 1;
	if (tam_base % 2 != 0) {
		segunda_metade_count -= 1;
	}

	for (vector<int>& linha : piramide) {
		linha_count += 1;
		if (linha_count <= metade_base+1) {
			for (int i = 0; i < linha_count; i++) {
				linha.push_back(i+1);
			}
			for (int i = 0; i <= (metade_base - linha_count); i++) {
				linha.push_back(linha_count);
			}

			int marcador_copia = metade_base;
			if (tam_base % 2 != 0) {
				marcador_copia -= 1;
			}

			for (marcador_copia; marcador_copia >= 0; marcador_copia--) {
				int tmp = linha.at(marcador_copia);
				linha.push_back(tmp);
			}
		}
		else {
			segunda_metade_count -= 1;
			vector<int>& linha_refletida = *(piramide.begin()+segunda_metade_count);
			linha.insert(linha.end(), linha_refletida.begin(), linha_refletida.end());
		}
	}

	for (vector<int>& linha : piramide) {
		for (int i : linha) {
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
