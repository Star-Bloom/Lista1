#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double valor1;
	double valor2;
	double media;
	
	cout << "Insira o primeiro numero: ";
	cin >> valor1;
	cout << "Insira o segundo numero: ";
	cin >> valor2;
	
	media =  (valor1 * valor2);
	
	cout << "A media geometrica calculada: " << media;
	
	return 0;
}