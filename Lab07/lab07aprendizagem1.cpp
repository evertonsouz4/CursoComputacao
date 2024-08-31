#include <iostream>
using namespace std;

char codificar(char letra) { return letra + 3; }
char decodificar(char letra) { return letra - 3; }

int main() {
  char letra;
  cout << "Digite uma letra: ";
  cin >> letra;
  cout << "\nLetra codificada: " << codificar(letra) << "\n";
  cout << "Letra decodificada: " << decodificar(codificar(letra)) << "\n";

  return 0;
}
