#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, w, sum = 0, i = 0;
	double ws = 0;
	char t;
	while (cin >> n) {
		cin >> t >> w;

		i++;
		sum += n * w;
		ws += w;
	}

	cout << sum << endl;
	cout << round(ws / i) << endl;

	return 0;
}