#include<iostream>
using namespace std;


#define UPPER_LEFT_ANGLE	(char)218
#define UPPER_RIGHT_ANGLE	(char)191
#define LOWER_LEFT_ANGLE	(char)192
#define LOWER_RIGHT_ANGLE	(char)217
#define HORRIZONTAL_LINE	(char)196<<(char)196
#define VERTICAL_LINE		(char)179
#define BLACK_BOX			"\xDB\xDB"	// <<(char)219
#define WHITE_BOX			"\x20\x20"		//(char)' '<<' '
void main()
{
#ifdef ASCII

	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
#endif // ASCII

	
	setlocale(LC_ALL, "");
#ifdef DOSKA_SHAHMATNAYA
	int n;
	cout << "¬ведите размер число: "; cin >> n; n++;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORRIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			//else if (i % 2 == j % 2)cout << WHITE_BOX;
			//else cout << BLACK_BOX;
			else cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}
		cout << endl;

#endif // DOSKA_SHAHMATNAYA

		int n;
	cout << "¬ведите размер число: "; cin >> n; n++;
	
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			 cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
		}

	}

}