#include <iostream>
using namespace std;

int main (int argc, char** argv)

{
	double diagonal;
	double area;
	
	cout << "Informe a diagonal do quadrado: ";
	cin >> diagonal;
	
	area = diagonal * diagonal / 2;
	
	cout << "A area do quadrado calculada: " << area;
	
	return 0;
	
}