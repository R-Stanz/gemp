#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vet = {1, 5, 7, 8, 14, 17, 19, 20, 25, 30};
    int target = 19;

    // Busca binária
    // Declaramos dois ponteiros l e r, que representam o início e o fim do vetor, respectivamente
    int l = 0, r = vet.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (vet[m] == target) {
            cout << "Valor encontrado no índice " << m << endl;
            return 0;
        }
        if (vet[m] < target) {  // Se o valor do meio for menor que o valor procurado, o valor procurado está na metade direita
            l = m + 1;          // Atualizamos o ponteiro l para m + 1, pois o valor está pelo menos na posição m + 1
        } else {                // Se o valor do meio for maior que o valor procurado, o valor procurado está na metade esquerda
            r = m - 1;          // Atualizamos o ponteiro r para m - 1, pois o valor está no máximo na posição m - 1
        }
    }
}