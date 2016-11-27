#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int a, b;
void split(string s) {
	int tmp = 0, n = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != ',') {
			tmp *= 10;
			tmp += s[i] - '0';
		} else {
			a = tmp;
			tmp = 0;
		}
		b = tmp;
	}
}

bool find(vector<int> v, int n) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] == n) return true;
	}
	return false;
}

int main() {
	string s;
	map<int, int> m1;
	map<int, int> m2;
	vector<int> v;
	while (getline(cin, s)) {
		if (s.size() == 0) break;
		split(s);
		m1[a]++;

		if (find(v, a)) continue;
		v.push_back(a);
	}

	while (getline(cin, s)) {
		split(s);
		m2[a]++;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		if (m2[v[i]] == 0) continue;
		cout << v[i] << " " << m1[v[i]] + m2[v[i]] << endl;
	}
	return 0;
}