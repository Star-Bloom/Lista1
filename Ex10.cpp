#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double cotacaodollar;
	double valordollar;
	double reais;
	
	cout << "Insira a cotacao do dollar: ";
	cin >> cotacaodollar;
	cout << "Insira um valor em dollar: ";
	cin >> valordollar;
	
	reais = cotacaodollar * valordollar;
	
	cout << "O valor em reais calculado: " << reais;
	return 0;
}