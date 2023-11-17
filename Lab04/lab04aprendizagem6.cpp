#include <stdlib.h>
#include <iostream>
using namespace std;
void Inicializar();
void ligar();
void verificar();
void ativar();

int main() {
    Inicializar();

    return 0;
}

void Inicializar() {
    cout << "Inicializando Sistema: \n";
    ligar();
    verificar();
    ativar();
    cout << "Inicializacao concluida.\n";
    int num1 = rand();
    if (num1 > 16384) { cout << "\n\nSistema em funcionamento."; }
}
void ligar() {
    cout << "- Ligando dispositivos \n";
}
void verificar() {
    cout << "- Verificando integridade \n";
}
void ativar() {
    cout << "- Ativando processos \n";
}
