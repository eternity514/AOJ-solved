#include <iostream>
#include <string>
using namespace std;

#define rep(a, b, i) for(int i = a; i < b; i++)

char ch(int a, int b, int c) {
	return (a * (c - 'a') + b) % 26 + 'a';
}

int main() {
	int n, a, b, c;
	cin >> n;
	cin.ignore();

	string str, res = "";
	for (; n > 0; n--) {
		getline(cin, str);

		rep(1, 27, a) {
			if (a == 2 || a == 13) continue;
			rep(1, 27, b) {
				res = str;
				c = 0;
				rep(0, str.size(), c) {
					if (res[c] == ' ') continue;

					res[c] = ch(a, b, res[c]);
				}
				if (res.find("this") != -1 || res.find("that") != -1) {
					cout << res << endl;
					a = 114514;
					b = 114514;
				}
			}
		}
	}
	return 0;
}