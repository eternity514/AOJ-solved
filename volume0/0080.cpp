#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int n;
	double res;
	while (cin >> n) {
		if (n == -1) break;
		res = n / 2.0;

		while (1) {
			res -= (res*res*res - n) / (3 * res*res);
			if (fabs(res*res*res - n) < 0.00001 * n) break;
		}
		printf("%.6lf\n", res);
	}
	return 0;
}