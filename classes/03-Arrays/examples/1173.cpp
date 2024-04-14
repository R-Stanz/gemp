#include <iostream>
using namespace std;
int main() {
    int* n = new int[10];
    int x{};
    cin >> x;
    for (int i = 0; i < 10; i++) {
        if (i == 0)
            n[0] = x;
        else
            n[i] = n[i - 1] * 2;
        cout << "N[" << i << "] = " << n[i] << endl;
    }
}