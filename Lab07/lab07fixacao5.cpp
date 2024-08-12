#include <iostream>
using namespace std;

int main(){
	unsigned char estado = 170;
	cout << (int) estado << "\n";

	estado = estado ^ 15;
	cout << (int) estado << "\n";

	return 0;
}
