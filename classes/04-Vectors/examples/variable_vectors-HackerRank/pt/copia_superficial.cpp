#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numero_de_vectors;
    int numero_de_requisicoes;
    
    cin >> numero_de_vectors >> numero_de_requisicoes;
    vector<vector<int>> vector_de_vectors(numero_de_vectors);
    
    for (int i = 0; i < numero_de_vectors; i++) {
        
        int tamanho_novo_vector;
        cin >> tamanho_novo_vector;
        
        vector<int>* novo_vector = &vector_de_vectors.at(i);
        for (int u = 0; u < tamanho_novo_vector; u++) {
            
            int novo_valor;
            cin >> novo_valor;
            
            novo_vector->push_back(novo_valor);
        }
    }
    
    for (int i = 0; i < numero_de_requisicoes; i++) {
        int index_do_vector;
        int index_do_valor;
        
        cin >> index_do_vector >> index_do_valor;
        
        vector<int>* vector_selecionado = &vector_de_vectors.at(index_do_vector);
        
        cout << vector_selecionado->at(index_do_valor) << endl;
    }
    
    return 0;
}
