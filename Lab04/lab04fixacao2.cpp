#include <iostream>
using namespace std;
void linha();
void pequena();
void media();
void grande();

int main() {
    pequena(), cout << "\n";
    media(), cout << "\n";
    grande(), cout << "\n";
    cout << "Programacao de Computadores\n";
    grande(), cout << "\n";
    media(), cout << "\n";
    pequena(), cout << "\n";
    return 0;
}

void linha() {
    cout << "----------";
}
void pequena() {
    linha();
}
void media() {
    linha(),linha();
}
void grande() {
    linha(),linha(),linha();
}
