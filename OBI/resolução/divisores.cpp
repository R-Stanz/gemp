#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<int> divisores;

void getDivisores(int numero) {
    int aux = numero, e = 2, count = 0;
    while (aux >= 1 && e <= numero / 2) {
        if (aux % e == 0) {
            aux /= e;
            count++;
        } else {
            if (count > 0) {
                divisores.push_back(count);
            }
            e++;
            count = 0;
        }
    }
}

int main() {
    int n;
    cin >> n;
    getDivisores(n);
    int result = 1;
    for (int i = 0; i < divisores.size(); i++) {
        result *= (divisores[i] + 1);
    }
    cout << result << endl;
}