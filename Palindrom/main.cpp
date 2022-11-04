#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int  a, num, b, c = 0;
	while (true)
	{
		cout << " ¬ведите положительное число: " << endl;
		cin >> num;
		a = num;
		do
		{
			b = num % 10;
			c = (c * 10) + b;
			num = num / 10;
		} while (num != 0);
		cout << " ѕоложительное число наоборот: " << c << endl;
		if (a == c)
			cout << " Ёто число €вл€етс€ палиндромом." << endl;
		else
			cout << " Ёто число не €вл€етс€ палиндромом." << endl;
	}

}
