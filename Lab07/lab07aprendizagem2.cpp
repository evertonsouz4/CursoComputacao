#include <iostream>
using namespace std;

char codificar(char letra) { return letra + 3; }
char decodificar(char letra) { return letra - 3; }

int main() {
  char letra;
  int num;
  cout << "Digite uma letra: ";
  cin >> letra;
  cout << "Digite 1 se deseja codificar\n"
          "Digite 0 se deseja decodificar: ";
  cin >> num;

  if (num == 1)
    cout << "\nLetra codificada: " << codificar(letra) << "\n";
  else
    cout << "\nLetra decodificada: " << decodificar(letra) << "\n";

  return 0;
}
