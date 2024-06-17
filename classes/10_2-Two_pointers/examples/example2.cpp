#include <bits/stdc++.h>
using namespace std;
int main() {
    int n{}, x{};
    bool resposta = false;
    cin >> n >> x;
    vector<int> seq(n);
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
    }

    // Two Pointers

    // [1,6,8,10,14] -> 7

    int l = 0, r = n - 1, sum{};
    while (l <= r) {
        sum = seq[l] + seq[r];
        if (sum == x) {
            resposta = true;
            break;
        } else if (sum > x) {
            r--;
        } else if (sum < x) {
            l++;
        }
    }

    cout << boolalpha << resposta << endl;
}