#include <iostream>
#include <string>
#include <numeric>
#include <vector>
using namespace std;

#define PAIR pair<int, int>

int lot[30][10];
int n, m, a, d;
int solve(int n) {
	for (int i = 0; i < d; i++) {
		if (lot[i][n] == -1) continue;
		n = lot[i][n];
	}
	return n;
}

int main() {
	string s;
	while (cin >> n) {
		if (n == 0) break;
		cin >> m >> a >> d;

		vector<PAIR> v[30];
		for (int i = 0; i < 30; i++) {
			fill(lot[i], lot[i] + 10, -1);
		}

		for (int i = 0; i < d; i++) {
			cin >> s;
			for (int j = 0; j < n - 1; j++) {
				if (s[j] == '1') {
					lot[i][j] = j + 1;
					lot[i][j + 1] = j;
				}

				if (s[j] == '1') continue;

				if ((j - 1 < 0 || s[j - 1] == '0') && (j + 1 >= n - 1 || s[j + 1] == '0'))
					v[i].push_back(make_pair(j, j + 1));
			}
		}

		m--; a--;
		if (solve(m) == a) {
			cout << 0 << endl;
			continue;
		}

		bool judge = false;
		for (int i = 0; i < d; i++) {
			if (v[i].empty()) continue;
			for (int j = 0; j < v[i].size(); j++) {
				lot[i][v[i][j].first] = v[i][j].second;
				lot[i][v[i][j].second] = v[i][j].first;

				if (solve(m) == a) {
					cout << i + 1 << " " << v[i][j].second << endl;
					judge = true;
					break;
				}

				lot[i][v[i][j].first] = -1;
				lot[i][v[i][j].second] = -1;
			}
			if (judge) break;
		} 
	
		if (!judge) cout << 1 << endl;
	}
	return 0;
}