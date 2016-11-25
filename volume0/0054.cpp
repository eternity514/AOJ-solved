#include <iostream>
using namespace std;

int main() {
	int a, b, n;

	while (cin >> a) {
		cin >> b >> n;

		int sum = 0;
		for (; n-- > 0;) {
			a = a % b * 10;
			sum += a / b;
		}
		cout << sum << endl;
	}
	return 0;
}