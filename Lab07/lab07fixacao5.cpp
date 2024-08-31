#include <iostream>
using namespace std;

unsigned char ligarBit(unsigned char status, int posicao) {
  unsigned char mascara = 1 << posicao;
  return status = status | mascara;
}

unsigned char desligarBit(unsigned char status, int posicao) {
  unsigned char mascara = ~(1 << posicao);
  return status = status & mascara;
}

bool testarBit(unsigned char status, int posicao) {
  unsigned char mascara = 1 << posicao;
  return status & mascara ? true : false;
}

int main() {
  cout << int(ligarBit(167, 3)) << "\n";
  cout << int(desligarBit(252, 3)) << "\n";
  cout << testarBit(240, 7) << "\n";

  return 0;
}
