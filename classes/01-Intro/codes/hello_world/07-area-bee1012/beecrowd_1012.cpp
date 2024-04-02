#include <iomanip>
#include <iostream>

using namespace std;

void imprimirAreas(double A, double B, double C);
double areaTriangulo(double A, double C);
double areaCirculo(double C);
double areaTrapezio(double A, double B, double C);
double areaQuadrado(double B);
double areaRetangulo(double B, double A);

int main() {
    double A, B, C;

    cin >> A >> B >> C;

    imprimirAreas(A, B, C);

    return 0;
}

void imprimirAreas(double A, double B, double C) {
    cout << fixed << setprecision(3) << "TRIANGULO: " << areaTriangulo(A, C) << endl;
    cout << "CIRCULO: " << areaCirculo(C) << endl;
    cout << "TRAPEZIO: " << areaTrapezio(A, B, C) << endl;
    cout << "QUADRADO: " << areaQuadrado(B) << endl;
    cout << "RETANGULO: " << areaRetangulo(A, B) << endl;
}

double areaQuadrado(double B) {
    return B * B;
}
double areaTriangulo(double A, double C) {
    return (A * C) / 2;
}
double areaCirculo(double C) {
    return C * C * 3.14159;
}
double areaTrapezio(double A, double B, double C) {
    return ((A + B) * C) / 2;
}
double areaRetangulo(double B, double A) {
    return A * B;
}
