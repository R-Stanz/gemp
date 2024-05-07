#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> fila;

    int num_pessoas_fila;
    cin >> num_pessoas_fila;

    int aux;
    while (num_pessoas_fila--) {
        cin >> aux;
        fila.push_back(aux);
    }

    int qtd_sairam;
    cin >> qtd_sairam;
    while (qtd_sairam--) {
        cin >> aux;
        for (int i = 0; i < fila.size(); ++i) {
            if (fila.at(i) == aux) {
                fila.erase(fila.begin() + i);
                break;
            }
        }
    }

    for (int i = 0; i < fila.size() - 1; ++i) {
        cout << fila.at(i) << " ";
    }
    cout << fila.back() << endl;

    return 0;
}