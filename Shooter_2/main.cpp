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
	if (key == 'w' || key == 'W' || key == UpArrow)cout << "������" << endl;
	else if (key == 's' || key == 'S' || key == DownArrow) cout << "�����" << endl;
	else if (key == 'd' || key == 'D' || key == LeftArrow)cout << "�����" << endl;
	else if (key == 'a' || key == 'A' || key == RightArrow)cout << "������" << endl;
	else if (key == ' ')cout << "������" << endl;
	else if (key == 13) cout << "�����" << endl;
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
	case  UpArrow:cout << "������" << endl; break;
	case 'S':
	case 's':
	case  DownArrow:cout << "�����" << endl; break;
	case  'A':
	case  'a':
	case  LeftArrow:cout << "�����" << endl; break;
	case  'D':
	case  'd':
	case  RightArrow:cout << "������" << endl; break;
	case ' ':cout << "������" << endl; break;
	case  Enter:cout << "�����" << endl; break;
	case Escape:cout << "�����" << endl;
	case -32:break;
	default: cout << "ERROR" << endl;
	}
} while (key != Escape);


		
}