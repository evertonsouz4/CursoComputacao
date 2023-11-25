#include <iostream>
#include "lab05aprendizagem6func.h"
using namespace std;

int main() {
    double x, y, tam, graus;
    cout << "Digite as coordenadas do vetor:\n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "Coordenadas polares do vetor: ";
    cout << "(" << tam_vet(x, y) << ", " << atan_graus(x, y) << ")";

    return 0;
}
