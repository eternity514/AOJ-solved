#include <iostream>
using namespace std;

int main() {
	int c1, c2, c3;
	while (cin >> c1) {
		cin >> c2 >> c3;

		int c[10] = { 0 }, sum = c1 + c2, count = 0;
		c[c1 - 1] = c[c2 - 1] = c[c3 - 1] = 1;
		for (int i = 0; i < 10; i++) {
			if (c[i]) continue;

			if (sum + i + 1 <= 20) count++;
		}

		if (count / 7.0 >= 0.5) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}