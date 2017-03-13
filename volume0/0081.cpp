#include <cstdio>
using namespace std;

int main() {
	double x1, y1, x2, y2, xq, yq, m, n, x, y;
	while (scanf("%lf,%lf,%lf,%lf,%lf,%lf", &x1, &y1, &x2, &y2, &xq, &yq) != EOF) {
		if (x2 - x1 == 0) {
			printf("%.6lf %.6lf\n", 2 * x1 - xq, yq);
		} else if(y2 - y1 == 0) {
			printf("%.6lf %.6lf\n", xq, 2 * y2 - yq);
		} else {
			m = (y2 - y1) / (x2 - x1);
			n = -1 / m;

			x = 2 * (((y1 - m * x1) - (yq - n * xq)) / (n - m)) - xq;
			y = 2 * ((n * (y1 - m * x1) - m * (yq - n * xq)) / (n - m)) - yq;

			printf("%.6lf %.6lf\n", x, y);
		}
	}
	return 0;
}