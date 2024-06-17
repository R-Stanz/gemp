#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, unordered_set<int>> graph;

    // insere os tuneis no map, nos dois sentidos
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }

    int ans = 0;  // variável de resposta
    int p;
    cin >> p;
    for (int i = 0; i < p; i++) {
        int k;
        cin >> k;
        vector<int> c(k);
        for (int j = 0; j < k; j++) {
            cin >> c[j];
        }

        bool ok = true;
        for (int j = 1; j < k; j++) {
            if (graph[c[j]].find(c[j - 1]) == graph[c[j]].end()) {  // nao encontrou tunel
                ok = false;
                break;
            }
        }

        if (ok) ans++;
    }

    cout << ans << '\n';
    return 0;
}
