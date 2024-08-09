#include <iostream>
using namespace std;

int main(){
	int num = 19;
	int *num2 = &num;

	cout << "O valor de num e: " << num << "\n";
	cout << "O valor de num2 e: " << *num2 << "\n";

	return 0;
}
