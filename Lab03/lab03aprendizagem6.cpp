#include <iostream>
using namespace std;

int main() {
    int lado_a, lado_b, area, altura, volume;
    cout << "Lado a: ";
    cin >> lado_a;
    cout << "Lado b: ";
    cin >> lado_b;
    area = lado_a * lado_b;
    cout << "Area da base = " << area;
    cout << "\nAltura: ";
    cin >> altura;
    cout << "Volume do prisma = " << lado_a * lado_b * altura;

    return 0;
}
