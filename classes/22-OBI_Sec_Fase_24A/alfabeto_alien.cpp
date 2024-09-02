#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<char> pegar_alfabeto();
bool eh_alien(string& msg, unordered_set<char>& alfabeto);

int main () {

	int tam_alfabeto, tam_msg;
	cin >> tam_alfabeto >> tam_msg;

	unordered_set<char> alfabeto = pegar_alfabeto();

	string msg;
	cin >> msg;

	if (eh_alien(msg, alfabeto)) {
		cout << "S" << endl;
	}
	else {
		cout << "N" << endl;
	}

	return 0;
}

unordered_set<char> pegar_alfabeto() {
	unordered_set<char> alfabeto;
	
	string str_alfabeto;
	cin >> str_alfabeto;

	for (char& c : str_alfabeto) {
		alfabeto.insert(c);
	}

	return alfabeto;
}

bool eh_alien(string& msg, unordered_set<char>& alfabeto) {
	for (char& c : msg) {
		if (alfabeto.find(c) == alfabeto.end()) {
			return false;
		}
	}
	return true;
}
