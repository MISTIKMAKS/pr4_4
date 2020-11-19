#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, y, xp, xk, dx, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= 6)
			y = R;
		else
			if (-6 < x && x <= -R)
				y = -1 + (1 / (-R + 6)) * (x + 6);
			else
				if (-R < x && x <= 0)
					y = -sqrt((-x * x) - (2 * x * R) + (2 * y * R) - R * R);
				else
					if (0 < x && x <= R)
						y = sqrt(R * R - (x - R) * (x - R));
					else
						y = (-1 / (1 + R - R)) * (x - R);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}
