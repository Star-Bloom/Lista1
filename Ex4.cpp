#include <iostream>
using namespace std;

int main (int argc, char** argv)

{
	double Base;
	double Altura;
	double Area;
	
	cout << "Informe a base do Triangulo: ";
	cin >> Base;
	cout << "Informe a altura do Triangulo: ";
	cin >> Altura;
	
	Area = Base * Altura / 2;
	
	cout << "A area do quadrado calculada: " << Area;
	
	return 0;
	
}