#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	double n;
	while (cin >> n) {
		double sum = 0, a[10] = { 0 };
		sum = a[0] = n;
		for (int i = 1; i < 10; i++) {
			if ((i + 1) % 2 == 0) {
				a[i] = a[i - 1] * 2.0;
				sum += a[i];
			} else {
				a[i] = a[i - 1] / 3.0;
				sum += a[i];
			}
		}
		printf("%.8f\n", sum);
	}
	return 0;
}