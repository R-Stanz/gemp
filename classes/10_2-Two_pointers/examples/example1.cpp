#include <iostream>
using namespace std;

// ARARA = Palíndromo
// ARARA
// BANANA = Não Palíndromo
// ANANAB
// CARRO = Não Palíndromo
// RADAR = Palíndromo
// RENATO = Não Palíndromo
// CIVIC = Palíndromo

// two pointers - Dois ponteiros

int main() {
    string palavra;
    cin >> palavra;

    bool ehPalindromo = true;

    int esq = 0, dir = palavra.size() - 1;

    while (esq < dir) {
        if (palavra[esq] != palavra[dir]) {
            ehPalindromo = false;
            break;
        }
        esq++;
        dir--;
    }

    if (ehPalindromo)
        cout << "É palíndromo\n";
    else
        cout << "N é palíndromo\n";
}