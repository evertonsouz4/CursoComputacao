#include <cmath>
#include <iostream>
using namespace std;
double modulo_vet(double x, double y);

int main(){
    double x, y;
    cout << "Digite as coordenadas do vetor: \n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "\n\nO tamanho do vetor e: " << modulo_vet(x, y);

    return 0;
}

double modulo_vet(double x, double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}
