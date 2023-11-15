#include <iostream>
using namespace std;

int main() {
    int custo_f, custo_c;
    cout << "Digite o custo de fabrica: ";
    cin >> custo_f;
    custo_c = (custo_f * (0.28 + 0.45)) + custo_f;
    cout << "O custo ao consumidor e de R$" << custo_c;

    return 0;
}
