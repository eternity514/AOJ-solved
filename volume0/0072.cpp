#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int ma[100][100];

int main() {
	int n, m, a, b, d;
	char t;
	while (cin >> n) {
		if (n == 0) break;
		cin >> m;

		fill(ma[0], ma[100], 114514810);
		for (int i = 0; i < m; i++) {
			cin >> a >> t >> b >> t >> d;
			ma[a][b] = ma[b][a] = (d - 100) / 100;
		}

		bool v[100] = {false};
		v[0] = true;
		d = 0;
		for (int i = 0; i < n - 1; i++) {
			m = 114514810;
			for (int j = 0; j < n; j++) {
				if (ma[0][j] < m && !v[j]) {
					m = ma[0][j];
					b = j;
				}
			}
			v[b] = true;
			d += ma[0][b];
			for (int j = 0; j < n; j++) {
				ma[0][j] = min(ma[0][j], ma[b][j]);
			}
		}
		cout << d << endl;
	}
	return 0;
}