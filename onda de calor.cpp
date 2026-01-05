
#include <iostream>
#include <string>
#include <locale.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int M, N, T, contador = 0;
	cin >> M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> T;
		if (T >= M + 5){
			contador++;
			if (contador == 6) {
				break;
			}
		}
		else {
			contador = 0;
		}
}
	if (contador >= 6)
	{
		cout << "WAVE";
	}
	else {
		cout << "FLAT";
	}
}