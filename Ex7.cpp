#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double valor;
	double conversao;
	
	cout << "Insira em milhas o valor a ser convertido: ";
	cin >> valor;
	
	conversao = valor * 1852;
	
	cout << "O valor em quilometros: " << conversao;
	return 0;
}