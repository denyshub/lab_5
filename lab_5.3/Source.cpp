#include <iostream>
#include <cmath>
using namespace std;

double h(const double x);


int main() {
	double r, rp, rk, result;
	int num;

	cout << "Enter rp: "; cin >> rp;
	cout << "Enter rk: "; cin >> rk;
	cout << "Enter num: "; cin >> num;

	double rd = (rk - rp) / num;
	r = rp;

	while (r <= rk) {
		result = h(r + 1) + pow(h(r * r + 1), 2) + 1;
		cout << "r: " << r << " " << "Result: " << result << endl;
		r += rd;


	}


	return 0;
}

double h(const double x)
{
	if (abs(x) >= 1 || x == 0)
		return (cos(x) + 1) / exp(x);
	else
	{
		double S = 0;
		double a = x * x;
		int n = 0;
		S = a;
		double state = 1. / sin(x * x);
		do {
			n++;
			double R = pow(x, 4) / ((2 * n + 1) * 2 * n);
			a *= R;
			S += a;


		} while (n <= 6);
		return state * S;

	}
}