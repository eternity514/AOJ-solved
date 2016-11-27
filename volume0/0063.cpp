#include <iostream>
#include <string>
using namespace std;

bool findPalindrome(string s) {
	for (int i = 0; i < s.size() / 2; i++) {
		if (s[i] != s[s.size() - i - 1]) return false;
	}
	return true;
}

int main() {
	string s;
	int c = 0;
	while (cin >> s) {
		if (findPalindrome(s)) {
			c++;
		}
	}
	cout << c << endl;
	return 0;
}