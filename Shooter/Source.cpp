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
		case(119): cout << "W" << "������" << endl; break;
		case(115): cout << "S" << "�����" << endl; break;
		case(97): cout << "A" << " - " << "�����" << endl; break;
		case(100): cout << "D" << " - " << "������" << endl; break;
		case(32): cout << "SPACE" << "������" << endl; break;
		case(13): cout << "ENTER" << " - " << "�����" << endl; break;
		case(27): cout << "ESC" << " - " << "�����" << endl; break;
		default: cout << "ERROR" << endl;
		}
	}
}