#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> pessoas;
    pessoas["renato"] = 23;
    pessoas["djalma"] = 25;

    cout << pessoas["djalma"] << endl;

    if (pessoas.find("renato") != pessoas.end()) {
        cout << pessoas["renato"] << endl;
    } else {
        cout << "Pessoa não encontrada\n";
    }
}