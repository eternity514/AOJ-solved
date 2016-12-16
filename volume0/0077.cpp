#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, res;

	while (cin >> s) {
		res = "";
		int i = 0;
		while (i < s.size()) {
			if (s[i] == '@') {
				for (int j = 0; j < s[i + 1] - '1'; j++) {
					res += s[i + 2];
				}
				i += 2;
				continue;
			} else {
				res += s[i];
			}
			i++;
		}
		cout << res << endl;
	}
	return 0;
}