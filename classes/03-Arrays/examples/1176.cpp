#include <iostream>
using namespace std;
int main() {
    long* fib = new long[61];
    fib[0] = 0;
    fib[1] = 1;
    int x{}, l{}, res{};
    cin >> x;
    while (x--) {
        res = 0;
        cin >> l;
        for (int i = 0; i <= l; i++) {
            if (i == 0 || i == 1) continue;
            fib[i] = fib[i - 1] + fib[i - 2];
        }
        cout << "Fib(" << l << ") = " << fib[l] << endl;
    }
}