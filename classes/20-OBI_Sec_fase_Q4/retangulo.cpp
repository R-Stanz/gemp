#include <iostream>
#include <set>
using namespace std;

int main() {

	int num_de_coords;
	cin >> num_de_coords;

	set<int> coords;
	coords.insert(0);
	int coord_anterior = 0;
	for (int i = 1; i < num_de_coords; i++) {
		int tmp;
		cin >> tmp;
		tmp += coord_anterior;
		coords.insert(tmp);

		coord_anterior = tmp;
	}
	int tam_circulo;
	cin >> tam_circulo;
	tam_circulo += coord_anterior;

	int metade = tam_circulo / 2;
	int count_complementares = 0;
	for (int coord : coords) {
		if ((coord >= metade) or (tam_circulo % 2 != 0)) {
			break;
		}
		if (coords.find(coord + metade) != coords.end()) {
			count_complementares += 1;
		}
		if (count_complementares >= 2) {
			cout << "S" << endl;
			return 0;
		}
	}
	cout << "N" << endl;
	return 0;
}
