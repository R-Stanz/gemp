#include <iostream>
using namespace std;

int main() {
    int numero_de_iteracoes;
    
    cin >> numero_de_iteracoes;
    
    int numero_de_linhas;
    int numero_de_colunas;
    
    if (numero_de_iteracoes % 2 == 0) {
        numero_de_linhas = numero_de_iteracoes / 2;
        numero_de_colunas = 2;
    }
    
    else {
        numero_de_linhas = numero_de_iteracoes / 3;
        numero_de_colunas = 3;
        
        if (numero_de_iteracoes % 3 != 0)
            numero_de_linhas += 1;
    }
    
    int matriz[numero_de_linhas][numero_de_colunas];
    
    for (int linha = 0; linha < numero_de_linhas; linha++) {
        for (int col = 0; col < numero_de_colunas; col++) {
            
            int numero_de_elementos = linha * numero_de_colunas + col + 1;
            int novo_valor;
            
            if (numero_de_elementos > numero_de_iteracoes)
                novo_valor = 0;
            else
                cin >> novo_valor;
            
            matriz[linha][col] = novo_valor;
        }
    }
    
    cout << matriz[0][2] << " " << matriz[1][2] << endl;
    
    // 4 1 2 3 4
    // 5 99 20 90 11 42
    
    return 0;
}
