#include <iostream>
using namespace std;
double energ(double mets, double kg, double tempo);

int main()
{
	double corrida, ciclismo, natacao, peso, c_total; 
    double c_corrida, c_ciclismo, c_natacao;

	cout << "Digite o seu peso em kilos: ";
	cin >> peso;
	cout << "Digite o tempo de corrida em (min): ";
	cin >> corrida;
	cout << "Digite o tempo de ciclismo em (min): ";
	cin >> ciclismo;
	cout << "Digite o tempo de natacao em (min): ";
	cin >> natacao;

	c_corrida = energ(7.0, peso, corrida);
    c_ciclismo = energ(7.0, peso, ciclismo);
    c_natacao = energ(8.0, peso, natacao);
    c_total = c_corrida + c_ciclismo + c_natacao;
    cout << "Voce gastou um total de " << c_total << " calorias. \n";

	return 0;
}

double energ(double mets, double kg, double tempo)
{
	return mets * kg * (tempo / 60);    //funcao para calculo de gasto de energia em calorias
}
