#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1001

int dp[MAX][MAX];
int v[MAX], w[MAX];

int main() {
	int W, n, u = 0;
	char t;
	while (cin >> W) {
		if (W == 0) break;
		cin >> n;
		u++;

		for (int i = 0; i < n; i++) {
			cin >> v[i] >> t >> w[i];
		}

		for (int i = 1; i <= n; i++) {
			for (int j = 0; j <= W; j++) {
				if (w[i - 1] <= j) {
					dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
				} else {
					dp[i][j] = dp[i - 1][j];
				}
			}
		}

		int mv, mw;
		mv = mw = 0;
		for (int i = 0; i <= W; i++) {
			if (dp[n][i] > mv) {
				mv = dp[n][i];
				mw = i;
			}
		}

		cout << "Case " << u << ":" << endl;
		cout << mv << endl;
		cout << mw << endl;
	}
	return 0;
}