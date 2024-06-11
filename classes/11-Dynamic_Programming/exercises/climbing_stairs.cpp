class Solution {
public:
	int climbStairs(int n) {
		if (n == 1)
			return 1;

		int resultados[n];

		resultados[0] = 1;
		resultados[1] = 2;

		for (int i = 2; i < n; i++) {
			resultados[i] = resultados[i-1] + resultados[i-2];
		}

		return resultados[n-1];
	}
};
