#include <iostream>
using namespace std;

int main() {
	int s;
	double w, h;
	char t;

	while (cin >> s) {
		cin >> t >> w >> t >> h;

		if (w / (h * h) >= 25) cout << s << endl;
	}
	return 0;
}