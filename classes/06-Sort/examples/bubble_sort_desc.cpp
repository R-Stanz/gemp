#include <iostream>
using namespace std;

void print(int* arr, int tam);

int main() {
    int vet[]{100, 95, 78, 51, 59, 85, 4, 3, 2, 1};
    
    int tam = sizeof(vet)/sizeof(int);
    
    cout << "Original Array => ";
    print(vet, tam);
    
    // Bubble Sort
    for (int i = 0; i < tam - 1; i++) {
        for (int u = 0; u < tam - 1 - i; u++) {
            if (vet[u] < vet[u+1]) {
                int tmp = vet[u+1];
                vet[u+1] = vet[u];
                vet[u] = tmp;
            }
        }
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

