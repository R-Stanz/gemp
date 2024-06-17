#include <iostream>
using namespace std;
// Two pointers
int main() {
    string palavra;
    cin >> palavra;
    int l = 0, r = palavra.size() - 1;
    while (l <= r) {
        if (palavra[l] != palavra[r]) {
            cout << "Não é palíndromo" << endl;
            return 0;
        }
        l++;
        r--;
    }
    cout << "É palíndromo" << endl;
}