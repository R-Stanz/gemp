#include <iostream>
#include <unordered_map>
using namespace std;

// struct Pessoa {
//     string nome;
//     int idade;
// };

int main() {
    unordered_map<string, int> idades;
    idades["junior"] = 25;
    idades["maria"] = 30;
    idades["joao"] = 20;
    idades["jose"] = 40;
    idades["ana"] = 35;

    cout << idades["junior"] << endl;

    /* unordered_map<string, Pessoa> pessoas;
    string cmd;
    while (true) {
        cin >> cmd;
        if (cmd == "add") {
            Pessoa p;
            cin >> p.nome >> p.idade;
            pessoas[p.nome] = p;
        } else if (cmd == "show") {
            string nome;
            cin >> nome;
            if (pessoas.find(nome) != pessoas.end()) {
                cout << pessoas[nome].nome << " " << pessoas[nome].idade << endl;
            } else {
                cout << "Pessoa não encontrada" << endl;
            }
        } else if (cmd == "exit") {
            break;
        }
    } */
}