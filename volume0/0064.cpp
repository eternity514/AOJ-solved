#include <iostream>
#include <string>
using namespace std;

int findNumber(string s) {
	int tmp = 0, res = 0;
	for (int i = 0; i < s.size(); i++) {
		if (0 <= s[i] - '0' && s[i] - '0' < 10) {
			tmp *= 10;
			tmp += s[i] - '0';
		} else {
			res += tmp;
			tmp = 0;
		}
	}
	return res + tmp;
}

int main() {
	string s;
	int sum = 0;
	while (cin >> s) {
		sum += findNumber(s);
	}
	cout << sum << endl;
	return 0;
}