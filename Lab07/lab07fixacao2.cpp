#include <iostream> 
using namespace std;

void som(){
	cout << "\a";
	cout << "iniciando com um som...\n";
}

void senha(){
	int psswd;
	cout << "Digite sua senha:_______\b\b\b\b\b\b\b";
	cin >> psswd;
	cout << "Obrigado!! \n";
}


int main(){
	som();
	senha();

	return 0;
}
