#include <iostream>
using namespace std;
double media_h(double x, double y);

int main(){
    double num1, num2;
    cout << "Entre com um numero: ";
    cin >> num1;
    cout << "Entre com outro numero: ";
    cin >> num2;
    cout << "A media harmonica dos numeros e: " << media_h(num1, num2);

    return 0;
}

double media_h(double x, double y){
    return 2.0 * x * y / (x + y);
}
