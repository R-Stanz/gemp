#include <iostream>
using namespace std;
int main() {
    int* par = new int[5];
    int* impar = new int[5];
    int c_i{}, c_p{}, l{};
    for (short i = 0; i < 15; i++) {
        cin >> l;
        if (l % 2 == 0)
            par[c_p++] = l;
        else
            impar[c_i++] = l;
        if (c_p == 5) {
            for (int j = 0; j < c_p; j++) {
                cout << "par[" << j << "] = " << par[j] << endl;
            }
            c_p = 0;
        }
        if (c_i == 5) {
            for (int j = 0; j < c_i; j++) {
                cout << "impar[" << j << "] = " << impar[j] << endl;
            }
            c_i = 0;
        }
    }
    for (int j = 0; j < c_i; j++) {
        cout << "impar[" << j << "] = " << impar[j] << endl;
    }
    for (int j = 0; j < c_p; j++) {
        cout << "par[" << j << "] = " << par[j] << endl;
    }
}