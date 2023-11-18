#include <iostream>
using namespace std;
double reajuste(int r);

int main(){
    double salario_at;
    cout << "Digite o seu salario atual: ";
    cin >> salario_at;
    cout << "Salario ajustado para: " << reajuste(salario_at);

    return 0;
}

double reajuste(int r){
    return r + (r * 0.15);
}
