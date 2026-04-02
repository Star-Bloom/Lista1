#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double valor;
	double conversao;
	
	cout << "Insira em Celsius o valor a ser convertido: ";
	cin >> valor;
	
	conversao = (valor * 9/5) + 32;
	
	cout << "O valor em farenheit: " << conversao;
	return 0;
}