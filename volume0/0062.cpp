#include <iostream>
#include <string>
using namespace std;

int main() {
	string n;
	int a[10];
	while (cin >> n) {
		for (int i = 0; i < 10; i++)
			a[i] = n[i] - '0';

		for (int i = 1; i <= 9; i++) {
			for (int j = 0; j < 10 - i; j++) {
				a[j] = (a[j] + a[j + 1]) % 10;
			}
		}

		cout << a[0] << endl;
	}
	return 0;
}