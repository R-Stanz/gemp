#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    float nota1;
    float nota2;
    float nota3;
    //...

    float notas[10];

    float notas2[10] = {7.5, 8.0, 9.0, 10.0, 7.0, 8.5, 9.5, 10.0, 7.0, 8.5};

    for (int i = 0; i < 10; i++) {
        cout << fixed << setprecision(1);
        cout << "Nota " << i + 1 << ": " << notas2[i] << endl;
    }
}