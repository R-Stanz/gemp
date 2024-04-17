#include <iostream>
using namespace std;

int main() {
    // Questão 1

    int x[10];
    int leitura;
    for (int i = 0; i < 10; i++) {
        cin >> leitura;
        x[i] = (leitura < 1) ? 1 : leitura;
        cout << "X[" << i << "] = " << x[i] << endl;
    }
    return 0;
}