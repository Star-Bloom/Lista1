#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	double valor1;
	double valor2;
	double valor3;
	double valor4;
	double valor5;
	double total;
	double pagamento;
	double troco;
	
	cout << "Insira o primeiro valor: ";
	cin >> valor1;
	cout << "Insira o segundo valor: ";
	cin >> valor2;
	cout << "Insira o terceiro valor: ";
	cin >> valor3;
	cout << "Insira o quarto valor: ";
	cin >> valor4;
	cout << "insira o quinto valor: ";
	cin >> valor5;
	
    total = valor1 + valor2 + valor3 + valor4 + valor5;
    cout << "Total da compra: R$ " << total << endl;

    cout << "Digite o valor do pagamento: ";
    cin >> pagamento;

    if (pagamento < total) {
        cout << "Pagamento insuficiente, faltam: R$ " << total - pagamento;
    } 
    else {
        troco = pagamento - total;
        cout << "Troco: R$ " << troco;
    }

    return 0; 
}