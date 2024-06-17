#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    bool resposta{false};
    cin >> n >> x;
    vector<int> seq(n);
    vector<int> prefixsum(n);
    for (int i = 0; i < n; i++) {
        cin >> seq[i];
        if (i == 0)
            prefixsum[0] = seq[0];
        else
            prefixsum[i] = prefixsum[i - 1] + seq[i];
    }
    int l = 0, r = 1;
    while (r <= n) {
        int sum_interval = prefixsum[r] - prefixsum[l - 1];
        if (sum_interval < x)
            r++;
        else if (sum_interval > x)
            l++;
        else {
            resposta = true;
            break;
        }
        if (l == r) r++;
    }

    cout << boolalpha << resposta << endl;
}