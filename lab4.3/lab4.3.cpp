
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x, f, xp, xk, dx;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------" << endl;
	cout << "|" << setw(5) << "F" << setw(5) << "|" << setw(5) << "x" << setw(5) << "|" << endl;
	cout << "---------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x + 5 < 0 && c == 0)
			f = 1 / (a * x) - b;
		else
			if (x + 5 > 0 && c != 0)
				f = (x - a) / x;
			else
				f = (10 * x) / (c - 4);
		
		cout << "| " << setw(8) << setprecision(4) << f << "| " << setw(8) << setprecision(4) << x << "|" << endl;
		x += dx;
	}
	cout << "---------------------" << endl;
	system("pause");
	return 0;
} 
