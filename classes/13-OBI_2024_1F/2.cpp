#include <iostream>

using namespace std;

int main() {
	
	int hora, min, seg;
	cin >> hora >> min >> seg;

	int atraso;
	cin >> atraso;

	seg += atraso;
	min += seg / 60;
	hora += min / 60;

	seg %= 60;
	min %= 60;
	hora %= 24;

	cout << hora << endl << min << endl << seg << endl;

	return 0;
}
