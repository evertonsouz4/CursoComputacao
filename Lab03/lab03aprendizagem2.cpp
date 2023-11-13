#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "___Tabuada___" << "\n\n";
    cout << "Digite um numero de 0 a 10: ";
    cin >> num;
    cout << "\n";

    for(int i= 0; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    return 0;
}
