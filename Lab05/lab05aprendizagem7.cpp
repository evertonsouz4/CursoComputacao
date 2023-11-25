#include <iostream>
using namespace std;
double quadrado(double num);
double cubo(double num);

int main(){
    double num1;
    cout << "Digite um valor: ";
    cin >> num1;
    cout << "\nQuadrado = " << quadrado(num1);
    cout << "\nCubo = " << cubo(num1);
    cout << "\nCubo do quadrado = " << cubo(quadrado(num1));

    return 0;
}

double quadrado(double num){
    return num * num;
}
double cubo(double num){
    return num * num * num;
}
