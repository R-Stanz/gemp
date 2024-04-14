#include <iostream>
using namespace std;

int main() {
    int* n = new int[10];
    int l{};
    for (int i = 0; i < 10; i++) {
        cin >> l;
        n[i] = (l <= 0) ? 1 : l;
    }
    for (int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << n[i] << endl;
    }
    delete[] n;
}