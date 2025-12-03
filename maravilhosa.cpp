/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <string>

#include <locale.h>

#include <cstdlib>

#include <time.h>

using namespace std;
 
int main() {

	setlocale(LC_ALL, "Portuguese");

	int votos[23]{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }, num, votosTotal=0, i;

	do {

			cout << "Diga me o numero da camisola do jogador que quer votar : ";

			cin >> num;

			if (num >= 0 && num <= 23) {

				if (num == 0) {

					break;

				} else {

					votos[num - 1]++;

					++votosTotal;

				}

			} else {

				cout << "Número inválido, tenta outra vez. \n ";

			}

	} while (num != 0);

	cout << "RESULTADO DA VOTAÇÂO\nTotal de votos : " << votosTotal << "\n\n";

	for ( i = 0; i < 23; i++) {

		if (votos[i] > 0) {

			cout << "Jogador " << i + 1 << ": " << votos[i] << " votos (" << (votos[i] / votosTotal) * 100 << "% dos votos)\n";

		}

	}

 
	return 0;

}