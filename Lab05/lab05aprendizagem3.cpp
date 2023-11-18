#include <math.h>
#include <iostream>
using namespace std;
double imc(double a, double m);

int main(){
    double altura, massa;
    cout << "Indice de massa corporal (IMC)\n"
         << "------------------------------\n";
    cout << "Altura: ";
    cin >> altura;
    cout << "Massa: ";
    cin >> massa;
    cout << "IMC: " << imc(altura, massa);

    return 0;
}

double imc(double a, double m){
    return m / (pow(a, 2));
}
