//a) f().
//b) 8. se enverter o programa o resultado fica diferente.
//c) Sim os programas sempre sao executados da esquerda para direita.

#include <iostream>
using namespace std;
int num;
int f();
int g();

int main() {
    num = 1;
    cout << f() + g() + num << endl;
}
int f() {
    num = num + 3;
    return num;
}
int g() {
    num = 2;
    return num;
}
