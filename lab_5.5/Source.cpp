#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;int Q(int m, int n, int level, int& depth) {	if (level > depth)
		depth = level;	cout << " level = " << level << endl;	if (m == 1 || n == 1) 		return 1;	if (m < n) 		return Q(n, m, level + 1, depth);	if (m == n) 		return 1 - Q(m, m - 1, level + 1, depth);	else		return Q(m, n - 1, level+1 , depth) + Q(m - n, n, level + 1  , depth);}int main() {	int m, n;	cout << "Enter m: "; cin >> m;	cout << "\nEnter n: "; cin >> n;	int depth = 0;	int level = 1;	int res = Q(m, n, level, depth);	cout << "\nResult: " << res;	cout << "\nDepth: " << depth;
	return 0;}