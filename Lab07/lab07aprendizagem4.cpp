#include <iostream>
using namespace std;

unsigned int bitsAltos(int num) { return num >> 16; }

int main() {
  int num;
  cout << "Digite um valor inteiro: ";
  cin >> num;
  cout << "Os 16 bits mais altos desse valor correspondem ao numero: "
       << bitsAltos(num) << "\n";

  return 0;
}
