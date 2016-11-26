#include <iostream>
using namespace std;

int main() {
	int n, a[10001] = { 0 };
	
	a[0] = 1;
	for (int i = 1; i < 10001; i++) {
		a[i] = a[i - 1] + i;
	}

	while (cin >> n) {
		cout << a[n] << endl;
	}
	return 0;
}