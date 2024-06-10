class Solution {
public:
	vector<vector<int>> generate(int numRows) {
		vector<vector<int>> triangle(numRows);

		triangle.at(0).push_back(1);

		for (int i = 1; i < numRows; i++) {

			vector<int>& linha_anterior = triangle.at(i-1);
			vector<int>& linha_atual = triangle.at(i);

			for (int u = 0; u <= linha_anterior.size(); u++) {
				if (u == 0) {
					linha_atual.push_back(1);
				}
				else if (u <= linha_anterior.size() / 2) {
					int soma = linha_anterior.at(u-1) + linha_anterior.at(u);
					linha_atual.push_back(soma);
				}
				else {
					int index = linha_anterior.size();
					index -= u;

					int val = linha_atual.at(index);

					linha_atual.push_back(val);
				}
			}
		}

		return triangle;
	}
};
