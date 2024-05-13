#include <iostream>
#include <queue>

using namespace std;

int main() {
        queue<int> fila;
  
        fila.push(4);
        fila.push(5);
  
        for (int i = 0; i < tamanho; i++) {
                cout << fila.front() << " ";
                fila.pop();
        }
        cout << endl;

        return 0;
}

