#include <iostream>
using namespace std;

int main(){
	int bit;
	cout << "Qual bit deseja ligar?: ";
	cin >> bit;

	unsigned char mascara = 1 << bit;
	unsigned char estado = 167;
	estado = estado | mascara;
	cout << int(estado);	

	return 0;
}
