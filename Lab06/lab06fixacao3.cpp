#include <iostream>
using namespace std;

int main(){
    short a = 2;
    int b = 4;
    long c = 4;
    long long d = 8;
    int t = a + b + c + d;

    cout << "short:        " << a << " bytes\n";
    cout << "int:          " << b << " bytes\n";
    cout << "long:         " << c << " bytes\n";
    cout << "long long:    " << d << " bytes\n";
    cout << "Total:        " << t << " bytes\n";

    return 0;
}
