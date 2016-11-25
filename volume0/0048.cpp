#include <iostream>
#include <string>
using namespace std;

double c[11] = { 48.00,
				 51.00,
				 54.00,
				 57.00,
				 60.00,
				 64.00,
				 69.00,
				 75.00,
				 81.00,
				 91.00,
				 150.00 };

string s[11] = { "light fly",
				 "fly",
				 "bantam",
				 "feather",
				 "light",
				 "light welter",
				 "welter",
				 "light middle",
				 "middle",
				 "light heavy",
				 "heavy" };

int main() {
	double n;
	while (cin >> n) {
		for (int i = 0; i < 11; i++) {
			if (n <= c[i]) {
				cout << s[i] << endl;
				break;
			}
		}
	}
	return 0;
}