

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "É par" << endl;
        // scanf -> cin >> n;
        // printf -> cout << n;
    } else {
        cout << "Não é par" << endl;
    }

    switch (n) {
        case 0:
            cout << "Nulo" << endl;
            break;
        case 1:
            cout << "Maior que 0" << endl;
            break;
        default:
            cout << "Maior que 1" << endl;
            break;
    }

    string par = (n % 2 == 0) ? "É par" : "É ímpar";

    cout << par << endl;
}