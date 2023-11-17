#include <iostream>
#include <math.h>
using namespace std;
int Absoluto(int n);

int main() {
    int num1;
    cout << "Digite um numero inteiro: ";
    cin >> num1;
    cout << "O valor absoluto e: " << Absoluto(num1) << ".";
    return 0;

}

int Absoluto(int n){
    return sqrt(pow(n, 2));
}


