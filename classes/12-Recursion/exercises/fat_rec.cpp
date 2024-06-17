#include <bits/stdc++.h>
using namespace std;

int fatorial(int n) {
    if (n == 0) {  // Caso base: o fatorial de 0 é 1
        return 1;
    }
    return n * fatorial(n - 1);  // Chamada recursiva
}

int main() {
    int n;
    cin >> n;                     // Lê o valor de n
    cout << fatorial(n) << endl;  // Imprime o resultado do fatorial de n
    return 0;
}