#include <iostream>
using namespace std;

int main(){
    double km, litro;
    cout << "Distancia percorrida (km): ";
    cin >> km;
    cout << "Litros de combustivel: ";
    cin >> litro;
    cout << "O consumo do seu carro foi de: " << km/litro << " km/litro.";
    return 0;
}
