#include <stdlib.h>
#include <ctime>
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Gerando numeros pseudoaleatorios: \n";
    srand(time(NULL));
    num = rand();
    cout << num << "\n";

    if (num < 16834) {
        cout << "PEQUENO";
    } else {
        cout << "GRANDE";
    }

    return 0;
}
