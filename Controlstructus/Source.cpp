#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int temperature;
#ifdef IF_ELSE
	cout << "������ ����������� �������:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;

	}
	else
	{
		cout << "�������" << endl;
	}
#endif // IF_ELSE
#ifdef WHALE_1
	using std::cin;
	using std::cout;
	using std::endl;
	int i = 0;//������� �����
	int n; //���������� ��������(Number of iterates)
	cout << "������ ����� ��������"; cin >> n;
	while (++i < n)
	{
		cout << i << "hello Word\n";
		//i++
	}
#endif // WHALE_1

#ifdef WHILE_2
	int n;
	cout << "������  ���������� ��������"; cin >> n;
	while (n--)
	{
		cout << n << "Hello World" << endl;
	}
	cout << n << endl;
#endif // WHILE_2

char key;
do
{
	key = _getch();
	cout << (int)key << "\t" << key << endl;
} while (true);

}
