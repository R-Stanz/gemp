#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<string, int> nome_idade{{"Renato", 23},{"Djalma", 25}};


	while (true) {
		string nome;
		cin >> nome;

		if (nome == "fim")
			break;

		int idade;
		cin >> idade;

		nome_idade[nome] = idade;
	}

	nome_idade["Renato"] += 1;
	int idade_renato = nome_idade["Renato"];

	if (nome_idade.find("Julio") != nome_idade.end()) {
		for (pair<string, int> i : nome_idade)
			cout << "Nome: " << i.first << ", Idade: " << i.second << endl;
	}
	else
		cout << "Nao Tem Julio"; 

	return 0;
}
