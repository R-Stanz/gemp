#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double* n = new double[100];
    for (short i = 0; i < 100; i++) cin >> n[i];
    for (short i = 0; i < 100; i++) {
        if (n[i] <= 10) {
            cout << fixed << setprecision(1) << "A[" << i << "] = " << n[i] << endl;
        }
    }
}