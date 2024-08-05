#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double consumo, dis, qnt_ini;
	cin >> consumo >> dis >> qnt_ini;

	double autonomia_ini = consumo * qnt_ini;
	double qnt_adicional = (dis - autonomia_ini) / consumo;

	if (qnt_adicional < 0) {
		qnt_adicional = 0;
	}
	cout << fixed << setprecision(1) << qnt_adicional << endl;

	return 0;
}
