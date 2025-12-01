#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
	setlocale(LC_ALL, "PORTUGUESE");
	srand(time(0));
	int num = rand() % 99 + 1;
	cout << "me de um numero entre 1 e 100:\n";
	cin >> num;
	system("pause");

	if (num <= 100)
	{
		cout << "esta certo";
	}
	else {
		cout << "esta fora do limite";
	}

}