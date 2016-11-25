#include <iostream>
#include <string>
using namespace std;

string st[4] = {"A","B","AB","O"};

int main() {
	int n, b[4] = { 0 };
	char t;
	string s;
	while (cin >> n) {
		cin >> t >> s;

		for (int i = 0; i < 4; i++) {
			if (s == st[i]) {
				b[i]++;
				break;
			}
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << b[i] << endl;
	}
	return 0;
}