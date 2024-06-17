// Prefix Sum - Soma de prefixos

// [1,5,7,9,15,78,2]  Soma [0 .. 4] = 37
// [1,5,7,9,15,78,2]  Soma [0 .. 3] = 22
// [1,5,7,9,15,78,2]  Soma [1 .. 4] = 36

// V =  [1,5,7,9,15,78,2]
// PS = [1,6,13,22,37,115,117]

// PS[6] - PS[2]

// Soma = PS[r] - PS[l-1]

// [3..6] = 117 - 13 = 104

// PS[i] =
// se i = 0, PS[0] = V[0]
// senão, PS[i] = PS[i-1] + V[i]

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    vector<int> PS(n);
    for (int i = 0; i < n; i++) {
        cin >> V[i];
        if (i == 0) {
            PS[0] = V[0];
        } else {
            PS[i] = PS[i - 1] + V[i];
        }
    }

    int l{}, r{};
    cin >> l >> r;
    cout << (PS[r] - PS[l - 1]) << endl;
}