#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int  a, num, b, c = 0;
	while (true)
	{
		cout << " ������� ������������� �����: " << endl;
		cin >> num;
		a = num;
		do
		{
			b = num % 10;
			c = (c * 10) + b;
			num = num / 10;
		} while (num != 0);
		cout << " ������������� ����� ��������: " << c << endl;
		if (a == c)
			cout << " ��� ����� �������� �����������." << endl;
		else
			cout << " ��� ����� �� �������� �����������." << endl;
	}

}
