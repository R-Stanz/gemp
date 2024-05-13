#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> pilha;

	pilha.push(4);
	pilha.push(5);

	int tamanho = pilha.size();
	for (int i = 0; i < tamanho; i++) {
		cout << pilha.top() << " ";
		pilha.pop();
	}
	cout << endl;

	return 0;
}
