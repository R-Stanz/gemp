#include <iostream>
using namespace std;

void print(int* arr, int tam);

int main() {
    int vet[]{100, 95, 78, 51, 59, 85, 4, 3, 2, 1};
    
    int tam = sizeof(vet)/sizeof(int);
    
    cout << "Original Array => ";
    print(vet, tam);
    
    // Selection sort
    for (int i = 0; i < tam; i++) {
        int maior_val_index = i;
        for (int u = i; u < tam; u++) {
            if (vet[maior_val_index] < vet[u])
                maior_val_index = u;
        }
        int tmp = vet[i];
        vet[i] = vet[maior_val_index];
        vet[maior_val_index] = tmp;
    }
    
    cout << "Sorted Array (Decrescente/Descending) => ";
    print(vet, tam);
    return 0;
}

void print(int* arr, int tam) {
    for (int i = 0; i < tam; i++)
        cout << arr[i] << " ";
    cout << endl;
}

