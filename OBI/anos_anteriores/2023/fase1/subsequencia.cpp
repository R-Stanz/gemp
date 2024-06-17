#include <bits/stdc++.h>
using namespace std;
int main() {
    int a{}, b{}, leitura{};
    cin >> a >> b;
    vector<int> subseq_A;
    for (int i = 0; i < a; i++) {
        cin >> leitura;
        subseq_A.push_back(leitura);
    }
    auto it = subseq_A.begin();  // iterator para o primeiro elemento de subseq_A
    for (int i = 0; i < b; i++) {
        cin >> leitura;
        while (*it != leitura) {         // enquanto o elemento atual de subseq_A for diferente de leitura
            it++;                        // avança o iterator
            if (it == subseq_A.end()) {  // se o iterator chegar ao final de subseq_A
                cout << "N\n";           // imprime "N" e encerra o programa
                return 0;
            }
        }
    }
    cout << "S\n";  // se o programa não encerrou, imprime "S", pois a sequência foi encontrada em subseq_A
    return 0;
}