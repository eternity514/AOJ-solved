#include <iostream>
#include <string>
using namespace std;

int a[12][12] = { 0 };
void remove(int y, int x) {
	if (y > 11 || x > 11 || y < 0 || x < 0 || a[y][x] == 0) return;
	a[y][x] = 0;
	remove(y + 1, x);
	remove(y - 1, x);
	remove(y, x + 1);
	remove(y, x - 1);
}

int main() {
	string s;
	do {
		for (int i = 0; i < 12; i++) {
			getline(cin, s);
			for (int j = 0; j < 12; j++) {
				a[i][j] = s[j] - '0';
			}
		}

		int count = 0;
		for (int i = 0; i < 12; i++) {
			for (int j = 0; j < 12; j++) {
				if (a[i][j] == 1) {
					remove(i, j);
					count++;
				}
			}
		}
		cout << count << endl;
		getline(cin, s);
	} while (cin);
	return 0;
}