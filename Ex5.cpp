#include <iostream>
using namespace std;

int main (int argc, char** argv)

{
	double valor1;
	double valor2;
	double valor3;
	double valor4;
	double media;
	
	cout << "Insira o primeiro numero: ";
	cin >> valor1;
	cout << "Insira o segundo numero: ";
	cin >> valor2;
	cout << "Insira o terceiro numero: ";
	cin >> valor3;
	cout << "Insira o quarto numero: ";
	cin >> valor4;
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	
	cout << "A media aritmetica dos quatro numeros calculada: " << media;
	
	return 0;
}