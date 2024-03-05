#include<iostream>
#include <conio.h>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
 
//#define WHILE
//#define  FACTORIAL
//#define POWER
//#define ASCII
//#define FIBONACCI_1
#define FIBONACCI_2 
//#define SIMPLEX_NUMBERS
#define MILTIPLICATION_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0;//счетчик цикла
	int n;   // количество итерации
	cout << "¬ведите количество итерациии"; cin >> n;
	while (i < n)
	{
		cout << "Hello\n";
		i++;
	}
#endif // WHILE

#ifdef WHILE
	int n;
	cout << "¬ведите количество итерациии"; cin >> n;
	for (
		int i = 0;
		i < n;
		i++
		)
	{
		cout << i << "\t";

	}
	cout << endl;

#endif // WHILE

#ifdef FACTORIAL
	char a = 100;
	a += 200;
	cout << (int)a << endl;
	int n;
	cout << "¬ведите число"; cin >> n;
	int f = 1;
	for (int i = 1; i <= n; i++)
	{

		cout << i << "!=";
		f *= i;
		cout << f << "\n";
	}
	cout << endl;
#endif // FACTORIAL

#ifdef POWER
	double a;  //основание степени(base)
	int n;  //показатель степени(exponent)
	double N = 1;//спепен(power)
	cout << "¬ведите основание степени:"; cin >> a; //Enter power base
	cout << "¬ведите показатель степени:"; cin >> n;//Enter power exponent
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;


#endif // POWER

#ifdef ASCII
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	}
#endif // ASCII

#ifdef FIBONACCI_1
	int n;
	cout << "¬ведите переедльное число:"; cin >> n;

	for (int a = 0, b = 1, c = a + b; a <= n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIBONACCI_1
#ifdef SIMPLEX_NUMBERS
	int n;
	cout << "¬ведите предельное  число:"; cin >> n;
	int simplex_counter = 0;
	time_t start = clock();
	for (int i = 0; i <= n; i++)
	{

		bool simple = true;
		for (int j= 2; j <sqrt (i); j++)
		{
			if (i % j == 0)
			{
				simple = false;
				break;
			}
		}

		if (simple)simplex_counter++;
		//cout << (simplex_counter++, i) << "\t";
	}
		time_t end = time(NULL);
	cout << endl;
	cout << "Amount of simplex numbers: " << simplex_counter << endl;
	cout << "Calculated by :" << double(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

#endif // SIMPLEX_NUMBERS
#ifdef MILTIPLICATION_TABLE
	for (int i = 1; i <= 10; i++)
	{
		cout << "“аблица умножени€ нa " << i << ":\n";
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j<100)cout << " ";
			if (i * j < 10)cout << " ";
				cout<< i * j << endl;
		}
		cout << endl;
	}
#endif // MILTIPLICATION_TABLE
}


