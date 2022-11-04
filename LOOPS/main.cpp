#include<iostream>
#include<conio.h> //Здесь находится функция _getch
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
	int n; //Количество итераций
	int i = 0; //Счетчик цикла
	cout << "Ведите колличество итераций: "; cin >> n;
	while (i < n)
	{
		cout << i << " Hello World\n";
		i++; // Шаг цикла
	}
#endif // WHILE_1

#ifdef WHILE_2
	int n; // Количество итераций 
	cout << "Количество итераций: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2

#ifdef PALINDROM
	int number; // число, вводимое с клавиатуры
	int revers = 0; // число, записанное задом наперед
	cout << "Введите число: "; cin >> number;
	int buffer = number; // копия числа, введенного с клавиатуры
	// эта копия нужна для того, чтобы исходные данные, введенные пользователем
	// остались неизменны
	while (buffer)
	{
		revers *= 10;           // освобождаем место для следующего младшего разряда
		revers += buffer % 10;  // получаем младший разряд числа
		buffer /= 10;           // удаляем полученный ранее разряд 
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Это обычное число" << endl;
	}usin
#endif // PALINDROM

#ifdef BILET
		int number;
	cout << "Введите номер билета, для посадки на рейс: "; cin >> number;
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
		cout << "Счастливый билет" << endl;
	}
	else
	{
		cout << "Не судьба" << endl;
	}
#endif // BILET

#ifdef FUNC
	char key;
	do
	{
		key = _getch();  // функция _getch() ожидает нажатие клавиши и возвращает ASCII-код нажатой клавиши
		cout << (int)key << "\t" << key << endl;
		// (int)key - явное преобразование переменной 'key' в тип данных 'int' 
		// для того чтобы увидеть код нажатой клавиши
	} while (key != 27); // while (key != Escape)  
#endif // FUNC


}