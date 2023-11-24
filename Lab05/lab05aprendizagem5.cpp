#include <math.h>
#include <iostream>
using namespace std;
double const PI = 3.141592;

int main() {
    double x, y, angl, result;
    cout << "Digite as coordenadas do vetor: \n";
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    result = atan2(y, x);
    cout << "\nO angulo do vetor e: " << result * 180 / PI << " graus.";
    return 0;
}
