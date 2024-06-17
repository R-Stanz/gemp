#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

struct Aluno {
    string nome;
    int habilidade;
};

// Comparador para ordenar os alunos pelo nível de habilidade em ordem decrescente
bool compararHabilidade(const Aluno& a, const Aluno& b) {
    return a.habilidade > b.habilidade;
}

int main() {
    int N, T;
    cin >> N >> T;

    vector<Aluno> alunos(N);

    for (int i = 0; i < N; ++i) {
        cin >> alunos[i].nome >> alunos[i].habilidade;
    }

    // Ordenar os alunos pelo nível de habilidade
    sort(alunos.begin(), alunos.end(), compararHabilidade);

    // Mapear os times
    map<int, vector<string>> times;

    // Distribuir os alunos nos times de forma alternada
    for (int i = 0; i < N; ++i) {
        int timeIndex = i % T;
        times[timeIndex].push_back(alunos[i].nome);
    }

    // Imprimir os times
    for (int i = 0; i < T; ++i) {
        cout << "Time " << i + 1 << endl;
        sort(times[i].begin(), times[i].end());
        for (const string& nome : times[i]) {
            cout << nome << endl;
        }
        if (i < T - 1) {
            cout << endl;
        }
    }

    return 0;
}
