#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");

double a;
double b;
char o;
cout << "¬ведите выражение:"; cin >> a >> o >> b;

#ifdef calk_1
if (o == '+')
{
	cout << a << "+" << b << "=" << a + b << endl;
}
else if (o == '-')
{
	cout << a << "-" << b << "=" << a - b << endl;
}
else if (o == '/')
{
	cout << a << "/" << b << "=" << a / b << endl;
}
else if (o == '*')
{
	cout << a << "*" << b << "=" << a * b << endl;
}

#endif // calk_1

#ifndef CALK_2
switch (o)
{
case'+':cout << a << "+" << b << "=" << a + b << endl; break;
case'-':cout << a << "-" << b << "=" << a - b << endl; break;
case'*':cout << a << "*" << b << "=" << a * b << endl; break;
case'/':cout << a << "/" << b << "=" << a / b << endl; break;
	if (b != 0)cout << a << "/" << b << "=" << a / b << endl;
	else cout << "Erroe: division by zero" << endl;
	break;
default:cout << "Error: No Operation" << endl;

}
#endif // !CALK_2