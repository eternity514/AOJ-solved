#include <iostream>
using namespace std;

int n, s, res[10][330] = { 0 };
bool num[10] = { 0 };
void combinations(int c, int sum) {
	if (c == 11) return;
	for (int i = 0; i < 10; i++) {
		if (num[i]) continue;
		num[i] = 1;
		++res[c + 1][sum + i * (c + 1)];
		combinations(c + 1, sum + i * (c + 1));
		num[i] = 0;
	}
}

int main() {
	combinations(0, 0);
	while (cin >> n) {
		cin >> s;
		if (s > 330) {
			n = 0;
			s = 0;
		}
		cout << res[n][s] << endl;
	}
	return 0;
}