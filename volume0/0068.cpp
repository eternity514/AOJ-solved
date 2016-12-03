#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define PAIR pair<double, double>

int main() {
	int n, k;
	double s, x, y, x1, y1, tmp, d, h;
	char t;
	while (cin >> n) {
		if (n == 0) break;

		vector<PAIR> list;
		vector<int> res;
		for (int i = 0; i < n; i++) {
			cin >> x >> t >> y;
			list.push_back(make_pair(x, y));
		}
		sort(list.begin(), list.end());

		double dx = list[0].first;
		double dy = list[0].second;

		k = 1;
		s = (list[1].second - dy) / (list[1].first - dx);
		for (int i = 2; i < n; i++) {
			x = list[i].first;
			y = list[i].second;

			tmp = (y - dy) / (x - dx);
			if (s < tmp) {
				s = tmp;
				k = i;
			}
		}

		res.push_back(0);
		res.push_back(k);
		while (true) {
			h = 0;
			k = 0;
			for (int i = 0; i < n; i++) {
				x = list[i].first;
				y = list[i].second;

				x1 = list[res[res.size() - 1]].first;
				y1 = list[res[res.size() - 1]].second;

				dx = list[res[res.size() - 2]].first;
				dy = list[res[res.size() - 2]].second;

				dx -= x1;
				dy -= y1;

				x -= x1;
				y -= y1;

				d = (dx * x + dy * y) / (hypot(dx, dy) * hypot(x, y));
				d = acos(d);
				if (h < d) {
					k = i;
					h = d;
				}
			}
			if (k == 0) break;
			res.push_back(k);
		}
		cout << n - res.size() << endl;
	}
	return 0;
}