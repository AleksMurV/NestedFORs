#include<iostream>
using namespace std;

//#define CLOCK
//#define MULTIPLICATION_TABLE
//#define PYTHAGORAS_TABLE


void main()
{
	setlocale(LC_ALL, "");
#ifdef CLOCK
	for (int i = 0; i < 10; i++)   // �������� (�������) ����
	{
		// �������� 'j' ��� ���
		for (int j = 0; j < 10; j++)  // ��������� for
		{
			cout << i << "\t" << j << endl;
		}
		//�������� 'j' ��� ���
	}
#endif // CLOCK

#ifdef MULTIPLICATION_TABLE

	for (int i = 1; i <= 10; i++)
	{
		cout << "������� ��������� �� " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
	}
#endif // MULTIPLICATION_TABLE

#ifdef PYTHAGORAS_TABLE
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5); // ��� �������� ������ ������ ���� ������ � �������������
			// ���� ����� ��� ������ �������� ������, �� ��������� �������� ��������� �� ��������� ���������
			cout << left;
			cout << i * j;
		}
		cout << endl;
	}
#endif // PYTHAGORAS_TABLE

}