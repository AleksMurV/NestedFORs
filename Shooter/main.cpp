﻿#include<iostream>
#include<conio.h>
using namespace std;

#define Enter  13
#define Escape 27

#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77

//define IF_SHOOTER
//define SW_SHOOTER


void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		// (int)key - явное преобразование типов

#ifdef IF_SHOOTER
		if (key == 'w' || key == 'W' || key == UP_ARROW)
		{
			cout << "Вперед" << endl;
		}
		else if (key == 's' || key == 'S' || key == DOWN_ARROW)
		{
			cout << "Назад" << endl;
		}
		else if (key == 'd' || key == 'D' || key == LEFT_ARROW)
		{
			cout << "Вправо" << endl;
		}
		else if (key == 'a' || key == 'A' || key == RIGHT_ARROW)
		{
			cout << "Влево" << endl;
		}
		else if (key == ' ')
		{
			cout << "Прыжок" << endl;
		}
		else if (key == Enter)
		{
			cout << "Огонь" << endl;
		}
		else
		{
			if (key != -32 && key != Escape) cout << "Error" << endl;
		}
#endif // IF_SHOOTER

#ifdef SW_SHOOTER
		switch (key)
		{
		case UP_ARROW:
		case 'w':
		case 'W': cout << "Вперед" << endl;  break;
		case LEFT_ARROW:
		case 's':
		case 'S': cout << "Назад" << endl;   break;
		case RIGHT_ARROW:
		case 'a':
		case 'A': cout << "Влево" << endl;   break;
		case DOWN_ARROW:
		case 'd':
		case 'D': cout << "Вправо" << endl;  break;
		case ' ': cout << "Прыжок" << endl;  break;
		case Enter: cout << "Огонь" << endl; break;
		case Escape: cout << "Exit" << endl;
		case -32:break;
		default: cout << "Error" << endl;
		}
#endif // SW_SHOOTER
	} while (key != Escape);

}