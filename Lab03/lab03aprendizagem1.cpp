#include <iostream>
using namespace std;

int main() {
    int anos_f, dias_f, cigarros;
    double preco_cart, preco_cigar, gasto_d, gasto_t;

    cout << "A quantos anos voce fuma? ";
    cin >> anos_f;
    cout << "Quantos cigarros voce fuma por dia? ";
    cin >> cigarros;
    cout << "Qual o preco medio de uma carteira de cigarro? ";
    cin >> preco_cart;

    dias_f = anos_f * 365;
    preco_cigar = preco_cart / 20;
    gasto_d = preco_cigar * cigarros;
    gasto_t = gasto_d * dias_f;
    cout << "Voce gastou ate agora R$" << gasto_t << " com cigarros."
         << "\n";

    return 0;
}
