#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double sum(const double x, const double eps, int& n, double S);
double A(const double x, const int n, double a);

int main() {

	cout << "Second way:\n";
	double xp, xk, x, step, eps, S = 0;
	int n = 0;
	cout << "Enter xp: "; cin >> xp;
	cout << "Enter xk: "; cin >> xk;
	cout << "Enter step: "; cin >> step;
	cout << "Enter accur: "; cin >> eps;

	cout << fixed;
	cout << "-----------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(10) << " log((1+x)/(1-x)) " << " |"
		<< setw(7) << "     S    " << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------------" << endl;

	x = xp;
	while (x <= xk) {

		S = sum(x, eps, n, S);

		double result = 2 * S;
		double form = log((1 + x) / (1 - x));

		cout << "|" << setw(5) << setprecision(2) << x << " |"
			<< setw(18) << setprecision(5) << form << " |"
			<< setw(10) << setprecision(5) << result << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += step;

	}
	return 0;
}



double sum(const double x, const double eps, int& n, double S) {
	n = 0;
	double a = x;
	S = a;
	do {
		n++;
		a = A(x, n, a);
		S += a;
	} while (abs(a) >= eps);

	return S;

}

double A(const double x, const int n, double a) {
	double R = x * x * (2 * n - 1.) / (2 * n + 1.);
	a *= R;

	return a;
}