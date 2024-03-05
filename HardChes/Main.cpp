#include<iostream>
using namespace std;

const int width = 8;

void main()
{
	setlocale(LC_ALL, "");
#ifdef DOSKA_2
	int n;
	cout << " ¬ведите размер доски: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < n; l++)
				{
					cout << (i % 2 == k % 2 ? "* " : "  ");

				}

			}
			cout << endl;
		}

	}
#endif // DOSKA_2

	int h;
	cout << " ¬ведите  высоту треугольника: "; cin >> h;
		for (int i = 0; i < h; i++)
		{
			cout.width(width / 2);
			cout << "";
		}
cout << left;
cout << 1 << endl;
int nf = 1;

		for (int n = 1; n <= h; n++)
		{
			nf *= n;
			int mf = 1;
			for (int i = 0; i < h - n; i++)
			{
				cout.width(width / 2);
				cout << "";
			}
				cout.width(width);
				cout << 1;
			cout << 1 << "\t";
			for (int m = 1;m <= n; m++)
			{
				mf *= m;
					int nmf = 1;
					for (int nm = 1; nm <= n - m; nm++)nmf *= nm;
				cout.width(width);
				cout << nf / mf / nmf;

			}
			cout << endl;
		}

}
