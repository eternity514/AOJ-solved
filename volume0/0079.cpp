#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	double x[3] = { .0 }, y[3] = { .0 }, sum = .0, z, a, b ,c;
	char t;

	cin >> x[0] >> t >> y[0] >> x[1] >> t >> y[1];
	while (cin >> x[2]) {
		cin >> t >> y[2];
		a = hypot(x[1] - x[0], y[1] - y[0]);
		b = hypot(x[2] - x[1], y[2] - y[1]);
		c = hypot(x[0] - x[2], y[0] - y[2]);
		z = (a + b + c) / 2;
		sum += sqrt(z * (z - a) * (z - b) * (z - c));
		x[1] = x[2], y[1] = y[2];
	}
	printf("%.6lf\n", sum);
	return 0;
}