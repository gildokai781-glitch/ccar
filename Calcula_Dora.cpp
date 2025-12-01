#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	int n1, n2, RES,Somar,Dividir,Mult;
	cout << "me de 1º numero\n";
	cin >> n1;
	cout << "me de 2º numero\n";
	cin >> n2;
	cout << "escolha:\n";
	cout << "somar,divir,mult\n\n";
	cin >> RES;
	Somar= n1 + n2;
	Mult = n1 * n2;
	Dividir = n1 / n2;
	RES = Somar, Mult, Dividir;
	
	cout << RES;
	cout << "\nObrigado";

}