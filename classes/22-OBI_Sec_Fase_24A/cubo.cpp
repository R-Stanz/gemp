#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int dim;
	cin >> dim;

	int nenhuma_face = 0;
	int uma_face = 0;
	int duas_faces = 0;
	if (dim-2 > 0) {
		nenhuma_face = pow(dim-2, 3);
		uma_face = 6*pow(dim-2, 2);
		duas_faces = 12*(dim-2);
	}
	int tres_faces = 8;
	cout << nenhuma_face << endl << uma_face << endl 
		<< duas_faces << endl << tres_faces << endl;

	return 0;
}
