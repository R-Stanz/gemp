#include <bits/stdc++.h>
using namespace std;

vector<int> memo(100, -1);  // Inicializa um vetor de memoização com -1

int fatorial(int n) {
    if (n == 0) {  // Caso base: o fatorial de 0 é 1
        return 1;
    }
    if (memo[n] != -1) {  // Se o resultado já foi calculado, retorna-o
        return memo[n];
    }
    return memo[n] = n * fatorial(n - 1);  // Calcula, armazena e retorna o resultado
}

int main() {
    int n;
    cin >> n;                     // Lê o valor de n
    cout << fatorial(n) << endl;  // Imprime o resultado do fatorial de n
    return 0;
}