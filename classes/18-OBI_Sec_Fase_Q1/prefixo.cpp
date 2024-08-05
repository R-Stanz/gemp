#include <iostream>

using namespace std;

int main () {

	int tam1;
	string str1;
	cin >> tam1 >> str1;

	int tam2;
	string str2;
	cin >> tam2 >> str2;

	int tam = tam1;
	if (tam1 > tam2) {
		tam = tam2;
	}

	int prefixo_tam = 0;
	for (int i = 0; i < tam; i++) {
		if (str1[i] == str2[i]) {
			prefixo_tam += 1;
		}
		else {
			break;
		}
	}

	cout << prefixo_tam << endl;

	return 0;
}
