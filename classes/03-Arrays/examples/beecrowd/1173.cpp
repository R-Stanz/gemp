#include <iostream>

using namespace std;

int main() {

        int numero_de_iteracoes = 10;
        int vetor[numero_de_iteracoes];
        int valor_inicial;

        cin >> valor_inicial;

        vetor[0] = valor_inicial;
        for (int i = 1; i < numero_de_iteracoes; i++) {
                vetor[i] = vetor[i-1]*2;
        }

        for ( int i = 0; i < numero_de_iteracoes; i++) {
                cout << "N[" << i << "] = " << vetor[i] << endl;
        }

    return 0;
}
