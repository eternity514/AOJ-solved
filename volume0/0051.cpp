#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, o = 0, ma, mi;
	string s;
	cin >> n;

	for (; n-- > 0;) {
		cin >> s;

		vector<int> v;
		for (int i = 0; i < s.size(); i++) {
			v.push_back(s[i] - '0');
		}
		sort(v.begin(), v.end());

		o = s.size();
		ma = 0;
		mi = 0;
		for (int i = 0; i < o; i++) {
			ma += v[o - i - 1] * pow(10, i);
			mi += v[i] * pow(10, i);
		}
		cout << (mi - ma) << endl;
	}
	return 0;
}