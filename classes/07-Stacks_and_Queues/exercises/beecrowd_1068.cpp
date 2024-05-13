#include <iostream>
#include <queue>

using namespace std;

int main() {

	string equacao;
	while (cin >> equacao) {

		queue<char> abrindo;
		for (char c : equacao) {
			if (c == '(')
				abrindo.push(c);

			else if (c == ')') {
				if (abrindo.size() == 0) {
					abrindo.push(c);
					break;
				}

				abrindo.pop();
			}
		}

		if (abrindo.size() > 0)
			cout << "incorrect" << endl;
		else
			cout << "correct" << endl;
	}

	return 0;
}
