#include <iostream>
using namespace std;
double media(double n, double m);

int main(){
    int num1, num2;
    cout << "Digite um valor inteiro: ";
    cin >> num1;
    cout << "Digite outro valor inteiro: ";
    cin >> num2;
    cout << "A media dos numeros e: " << media(num1, num2);
    
    return 0;
}

double media(double n, double m){
    return (n+m)/2;
}
