#include<iostream>
#include<conio.h>
using namespace std;

#define Escape 27
#define Enter 13
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

void main()
{
setlocale(LC_ALL, "");
#ifdef Shooter_1
char key;
do
{
	key = _getch();
	//cout << (int)key << "\t" << key << endl;
	key = _getch();
	if (key == 'w' || key == 'W' || key == UpArrow)cout << "Вперед" << endl;
	else if (key == 's' || key == 'S' || key == DownArrow) cout << "Назад" << endl;
	else if (key == 'd' || key == 'D' || key == LeftArrow)cout << "Влево" << endl;
	else if (key == 'a' || key == 'A' || key == RightArrow)cout << "Вправо" << endl;
	else if (key == ' ')cout << "Прыжок" << endl;
	else if (key == 13) cout << "Огонь" << endl;
	else if (key != 27) cout << "Error" << endl;
} while (key != Escape);
#endif // Shooter_1

char key;
do
{
	key = _getch();
	//cout << (int)key << "\t" << key << endl;
	switch (key)
	{
	case  'W':
	case  'w':
	case  UpArrow:cout << "Вперед" << endl; break;
	case 'S':
	case 's':
	case  DownArrow:cout << "Назад" << endl; break;
	case  'A':
	case  'a':
	case  LeftArrow:cout << "Влево" << endl; break;
	case  'D':
	case  'd':
	case  RightArrow:cout << "Вправо" << endl; break;
	case ' ':cout << "Прыжок" << endl; break;
	case  Enter:cout << "Огонь" << endl; break;
	case Escape:cout << "Выход" << endl;
	case -32:break;
	default: cout << "ERROR" << endl;
	}
} while (key != Escape);


		
}