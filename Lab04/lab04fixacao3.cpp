#include <iostream>
using namespace std;
void UmTres();
void Dois();

int main() {
    cout << "Comecando agora: \n";
    UmTres();
    cout << "\nPronto";

    return 0;
}

void Dois() {
    cout << "Dois";
}
void UmTres() {
    cout << "Um ", Dois(), cout << " Tres";
}
