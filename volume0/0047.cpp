#include <iostream>
using namespace std;

int main() {
	int a[3] = { 1, 0 ,0 }, tmp = 0;
	char x, t, y;
	while (cin >> x) {
		cin >> t >> y;

		tmp = a[x - 'A'];
		a[x - 'A'] = a[y - 'A'];
		a[y - 'A'] = tmp;
	}
	for (int i = 0; i < 3; i++) {
		if (a[i]) {
			cout << (char)(i + 'A') << endl;
			break;
		}
	}
	return 0;
}