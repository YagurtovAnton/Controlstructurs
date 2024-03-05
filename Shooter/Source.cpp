#include<iostream>
#include<conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;



void main()
{
	setlocale(LC_ALL, "");
	char key;

	while (true)
	{
		key = _getch();
		switch (key)
		{
		case(119): cout << "W" << "Вперед" << endl; break;
		case(115): cout << "S" << "Назад" << endl; break;
		case(97): cout << "A" << " - " << "Влево" << endl; break;
		case(100): cout << "D" << " - " << "Вправо" << endl; break;
		case(32): cout << "SPACE" << "Прыжок" << endl; break;
		case(13): cout << "ENTER" << " - " << "Огонь" << endl; break;
		case(27): cout << "ESC" << " - " << "Выход" << endl; break;
		default: cout << "ERROR" << endl;
		}
	}
}