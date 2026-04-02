#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double diametro;
	double area;
	
	cout << "insira o diametro do circulo: ";
	cin >> diametro;

	area = 3.14 * (diametro * diametro)/4;
	
	cout << "O valor da area calculada: " << area;
	return 0;
}