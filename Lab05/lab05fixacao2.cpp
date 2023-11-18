#include <iostream>
using namespace std;
double convert_fahrenheit(double g);

int main() {
    double graus;
    cout << "Digite uma temperatura em graus Celsius: ";
    cin >> graus;
    cout << graus << " graus Celsius equivalem a " << convert_fahrenheit(graus)
         << " graus Fahrenheit.";

    return 0;
}

double convert_fahrenheit(double g) {
    return 1.8 * g + 32;
}
