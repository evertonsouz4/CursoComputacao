#include <iostream>
using namespace std;

unsigned int bitsBaixos(int num) {
  unsigned int mascara = 65535;
  return num & mascara;
}

int main() {
  int num;
  cout << "Digite um valor inteiro: ";
  cin >> num;
  cout << "Os 16 bits mais baixos desse valor correspondem ao numero: "
       << bitsBaixos(num) << "\n";

  return 0;
}
