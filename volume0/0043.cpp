#include <iostream>
#include <string>
#include <vector>
using namespace std;

int tmp[10];

bool solve(int n, int f) {
	bool judge = false;
	if (f == 4) {
		for (int i = 1; i < 10; i++) {
			if (tmp[i] == 2) {
				return true;
			}
		}
		return false;
	}

	if (tmp[n] >= 3) {
		tmp[n] -= 3;
		judge = solve(n, f + 1);
		if (judge) return true;
		tmp[n] += 3;
	}

	if (n <= 7 && tmp[n] >= 1 && tmp[n + 1] >= 1 && tmp[n + 2] >= 1) {
		tmp[n]--; tmp[n + 1]--; tmp[n + 2]--;
		judge = solve(n, f + 1);
		if (judge) return true;
		tmp[n]++; tmp[n + 1]++; tmp[n + 2]++;
	}

	if (n < 9) {
		judge = solve(n + 1, f);
	}
	return judge;
}

int main() {
	string source;
	while (cin >> source) {
		int pai[10] = { 0 };
		for (int i = 0; i < 13; i++) {
			pai[source[i] - '0']++;
		}

		vector <int> v;
		for (int i = 1; i < 10; i++) {
			if (pai[i] < 4) {
				pai[i]++;
				for (int j = 0; j < 10; j++) {
					tmp[j] = pai[j];
				}
				if (solve(1, 0)) {
					v.push_back(i);
				}
				pai[i]--;
			}
		}

		if (v.empty()) cout << 0 << endl;
		else {
			for (int i = 0; i < (int)v.size() - 1; i++) {
				cout << v[i] << ' ';
			}
			cout << v[v.size() - 1] << endl;
		}
	}
	return 0;
}