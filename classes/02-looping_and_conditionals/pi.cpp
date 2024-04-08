

#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long int numerador = 22;
    long int denominador = 7;

    int count = 1;

    while (count < 20) {
        long int int_divisao = numerador / denominador;

        cout << int_divisao;

        int shift = 10;

        numerador = (numerador - int_divisao * denominador) * shift;
        count++;
    }

    return 0;
}