#include <bits/stdc++.h>
using namespace std;

int fatorial(int n) {
    int res = 1;                    // Inicializa o resultado
    for (int i = 1; i <= n; i++) {  // Itera de 1 até n
        res *= i;                   // Multiplica o resultado pelo índice atual
    }
    return res;  // Retorna o resultado final
}

int main() {
    int n;
    cin >> n;                     // Lê o valor de n
    cout << fatorial(n) << endl;  // Imprime o resultado do fatorial de n
    return 0;
}