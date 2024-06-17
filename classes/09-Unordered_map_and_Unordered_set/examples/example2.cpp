#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> matriculas;
    matriculas.insert(555555);
    matriculas.insert(666666);
    matriculas.insert(777777);
    matriculas.insert(888888);

    cout << matriculas.size() << endl;

    if (matriculas.find(555555) != matriculas.end()) {
        cout << "Matrícula encontrada" << endl;
    } else {
        cout << "Matrícula não encontrada" << endl;
    }
}