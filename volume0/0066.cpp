#include <iostream>
#include <string>
using namespace std;

int a[8][3] = { {0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8,},{2,4,6} };

bool judge(string s, char c) {
	for (int i = 0; i < 8; i++) {
		if (s[a[i][0]] == c && s[a[i][1]] == c && s[a[i][2]] == c)
			return true;
	}
	return false;
}

int main() {
	string s;
	while (cin >> s) {
		if (judge(s, 'o')) {
			cout << 'o';
		} else if (judge(s, 'x')) {
			cout << 'x';
		} else {
			cout << 'd';
		}
		cout << endl;
	}
	return 0;
}