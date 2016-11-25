#include <iostream>
#include <numeric>
using namespace std;

int main() {
	bool prime[1000000];
	fill(prime, prime + 1000000, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < 1000000; i++) {
		for (int j = 2; j * i < 1000000; j++) {
			if (!prime[i * j]) continue;
			prime[i * j] = false;
		}
	}

	int n;
	while (cin >> n) {
		if (n == 0) break;

		int t = 0, sum = 0;
		while (n > 0) {
			if (!prime[++t]) continue;

			n--;
			sum += t;
		}
		cout << sum << endl;
	}
	return 0;
}