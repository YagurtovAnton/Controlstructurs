#include<iostream>
using namespace std;
//#define ROMBUS_3
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << " ������� ���������� ���������:"; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1
#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2
#ifdef  TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)cout << "   ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef ROMBUS_1
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++)cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i; j < n - 1; j++)cout << "  "; cout << "/";
		cout << endl;
	}
#endif // ROMBUS_1
#ifdef ROMBUS_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = (i + 1) * 2; j < n * 2; j++)cout << " "; cout << "/";
		cout << endl;
	}

#endif // ROMBUS_2
#ifdef ROMBUS_3
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			//if (i % 2 == j % 2)cout << "- ";else cout << "+ ";
			//(i % 2 == j % 2) ? cout << "- " : cout << "+ ";
			//i % 2 == j % 2 ? cout << "- " : cout << "+ ";
			if (i + n == j || j + n == i)cout << "\\";
			else if (n - i % n - 1 == j % n && i + j != n * 2 - 1)cout << "/";
			else cout << " ";

		}
		cout << endl;
	}
#endif // ROMBUS_3


}