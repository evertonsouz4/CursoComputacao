#include <math.h>
#include <iostream>
using namespace std;

double arc_tan_graus(double y, double x);

int main() {
    double x, y;
    cout << "Digite as coordenadas do vetor: \n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "\nO angulo do vetor e: " << arc_tan_graus(y, x) << " graus. ";
    return 0;
}

double arc_tan_graus(double y, double x){
    return atan2(y, x) * 180 / 3.141592;
}
