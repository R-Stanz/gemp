#include <iostream>
#include <unordered_map>
using namespace std;

void listar_divisores_primos(int numero, unordered_map<int,int>& divisores_primos, int possivel_divisor = 2);

int main() {
	int num_inicial;
	cin >> num_inicial;

	unordered_map<int,int> divisores_primos;

	listar_divisores_primos(num_inicial, divisores_primos);

	int num_de_divisores = 1;
	for (auto divisor_contagem : divisores_primos) 
		num_de_divisores *= divisor_contagem.second + 1;

	cout << num_de_divisores << endl;

	return 0;
}

void listar_divisores_primos(int numero, unordered_map<int,int>& divisores_primos, int possivel_divisor){

	if (numero == 1) {}
	else if ((numero % possivel_divisor == 0)){// && (eh_primo(possivel_divisor))) {
			
			// if (divisores.contains(possivel_divisor)
			if (divisores_primos.find(possivel_divisor) != divisores_primos.end())
				divisores_primos[possivel_divisor] += 1;
			else 
				divisores_primos[possivel_divisor] = 1;

			listar_divisores_primos(numero/possivel_divisor, divisores_primos, possivel_divisor);
	}
	else
		listar_divisores_primos(numero, divisores_primos, ++possivel_divisor);
}
