#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int h, t, s, sum;
	while (cin >> h >> t >> s) {
		if (h == -1 && t == -1 && s == -1) break;

		sum = 3600 * 2 - (h * 3600 + t * 60 + s);
		printf("%02d:%02d:%02d\n", sum / 3600, sum % 3600 / 60, sum % 3600 % 60);
		sum *= 3;
		printf("%02d:%02d:%02d\n", sum / 3600, sum % 3600 / 60, sum % 3600 % 60);
	}
	return 0;
}