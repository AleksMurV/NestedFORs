#include<iostream>
#include<conio.h> //����� ��������� ������� _getch
using namespace std;

//#define WHILE_1
//#define WHILE_2
//#define PALINDROM
//#define BILET
//#define FUNK


void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef WHILE_1
	int n; //���������� ��������
	int i = 0; //������� �����
	cout << "������ ����������� ��������: "; cin >> n;
	while (i < n)
	{
		cout << i << " Hello World\n";
		i++; // ��� �����
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n; // ���������� �������� 
	cout << "���������� ��������: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2

#ifdef PALINDROM
	int number; // �����, �������� � ����������
	int revers = 0; // �����, ���������� ����� �������
	cout << "������� �����: "; cin >> number;
	int buffer = number; // ����� �����, ���������� � ����������
	// ��� ����� ����� ��� ����, ����� �������� ������, ��������� �������������
	// �������� ���������
	while (buffer)
	{
		revers *= 10;           // ����������� ����� ��� ���������� �������� �������
		revers += buffer % 10;  // �������� ������� ������ �����
		buffer /= 10;           // ������� ���������� ����� ������ 
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "��� ������� �����" << endl;
	}usin
#endif // PALINDROM

#ifdef BILET
		int number;
	cout << "������� ����� ������, ��� ������� �� ����: "; cin >> number;
	int sum1, sum2;
	sum1 = sum2 = 0;
	while (number > 999)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	if (sum1 == sum2)
	{
		cout << "���������� �����" << endl;
	}
	else
	{
		cout << "�� ������" << endl;
	}
#endif // BILET

#ifdef FUNC
	char key;
	do
	{
		key = _getch();  // ������� _getch() ������� ������� ������� � ���������� ASCII-��� ������� �������
		cout << (int)key << "\t" << key << endl;
		// (int)key - ����� �������������� ���������� 'key' � ��� ������ 'int' 
		// ��� ���� ����� ������� ��� ������� �������
	} while (key != 27); // while (key != Escape)  
#endif // FUNC


}