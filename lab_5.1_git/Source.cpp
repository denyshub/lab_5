#include <iostream>
#include <cmath>
using namespace std;

double h(double a, double b);

int main() {
	double s, t;
	double r;
	cout << "Enter s: "; cin >> s;
	cout << "Enter t: "; cin >> t;
	r = (pow(h(s, t), 4) + h(1, s * s + t * t)) / (1 + pow(h(s * t, 1), 2));
	cout << "Result: " << r;

	return 0;
}

double h(double a, double b) {
	return (a / (b * b + 1) + 1. / (a * a + b * b));
}
