#include <iostream>
using namespace std;

int main() {
    int hr, min;
    char d_pts;

    cout << "Que horas sao? ";
    cin >> hr;
    cin >> d_pts;
    cin >> min;
    cout << "O seu relogio esta atrasado.\n";
    cout << "Agora sao " << hr + 1 << d_pts << min << ".";

    return 0;
}
