#include <iostream>
#include <numeric>
using namespace std;

#define SIZE 50001

int main() {
	bool prime[SIZE];
	fill(prime, prime + SIZE, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i * i < SIZE; i++) {
		for (int j = 2; j * i < SIZE; j++) {
			if (!prime[i * j]) continue;
			prime[i * j] = false;
		}
	}

	int n, count;
	while (cin >> n) {
		if (n == 0) break;

		count = 0;
		for (int i = 0; i <= n / 2; i++) {
			if (prime[i] && prime[n - i]) count++;
		}
		cout << count << endl;
	}
	return 0;
}