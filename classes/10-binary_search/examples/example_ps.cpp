// Prefix sum
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> vet = {1, 5, 7, 8, 14, 17, 19, 20, 25, 30};
    vector<int> prefix_sum(vet.size() + 1);
    prefix_sum[0] = vet[0];
    for (int i = 1; i < vet.size(); i++) {
        prefix_sum[i] = prefix_sum[i - 1] + vet[i];
    }

    int l, r;
    cin >> l >> r;
    cout << prefix_sum[r] - prefix_sum[l - 1] << endl;
}