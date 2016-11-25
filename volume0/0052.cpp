#include <iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;

		int i = 0;
		while (n /= 5) i += n;

		cout << i << endl;
	}
	return 0;
}