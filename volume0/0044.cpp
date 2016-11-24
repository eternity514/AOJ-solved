#include <iostream>
#include <numeric>
using namespace std;

int main() {
	bool prime[100000];
	fill(prime, prime + 100000, 1);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < 100000; i++) {
		for (int j = 2; i * j < 100000; j++) {
			if (!prime[i * j]) continue;
			prime[i * j] = false;
		}
	}

	int n;
	while (cin >> n) {
		int i = 0;
		for (int i = n - 1; i >= 0; i--) {
			if (prime[i]) {
				cout << i << " ";
				break;
			}
		}
		for (int i = n + 1; i < 100000; i++) {
			if (prime[i]) {
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}