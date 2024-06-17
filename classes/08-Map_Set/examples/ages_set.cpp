#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> idades{23, 25};

    while (true) {
        int idade;
        cin >> idade;

        if (idade < 16)
            break;

        idades.insert(idade);
    }

    cout << "Imprimindo idades" << endl;
    for (auto idade = idades.rbegin(); idade != idades.rend(); idade++)
        cout << *idade << endl;

    return 0;
}
