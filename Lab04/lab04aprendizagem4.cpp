#include <math.h>
#include <iostream>
using namespace std;
double VolumeCilindro(double r, double al);
const double PI = 3.14159;

int main() {
    double raio, altura;
    cout << "Calcula o Volume de um Cilindro\n";
    cout << "-------------------------------\n";
    cout << "Entre com o raio da base: ";
    cin >> raio;
    cout << "Entre com a altura: ";
    cin >> altura;
    cout << "O volume do cilindro e: " << VolumeCilindro(raio, altura);

    return 0;
}

double VolumeCilindro(double r, double al) {
    return PI * (pow(r, 2)) * al;
}
