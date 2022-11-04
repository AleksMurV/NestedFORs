#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int  a, num, b, c = 0;
	while (true)
	{
		cout << " Введите положительное число: " << endl;
		cin >> num;
		a = num;
		do
		{
			b = num % 10;
			c = (c * 10) + b;
			num = num / 10;
		} while (num != 0);
		cout << " Положительное число наоборот: " << c << endl;
		if (a == c)
			cout << " Это число является палиндромом." << endl;
		else
			cout << " Это число не является палиндромом." << endl;
	}

}
