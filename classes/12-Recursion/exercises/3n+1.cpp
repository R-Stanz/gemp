// link do exercicio: https://neps.academy/br/exercise/259

#include <iostream>
using namespace std;

int collatz(int n) {
    if (n == 1) {
        return 0;
    }
    if (n % 2 == 0) {
        return 1 + collatz(n / 2);
    }
    return 1 + collatz(3 * n + 1);
}

int main() {
    int n;
    cin >> n;
    cout << collatz(n) << endl;
    return 0;
}