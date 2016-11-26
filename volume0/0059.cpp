#include <iostream>
using namespace std;

int main() {
	double ax, ay, bx, by, cx, cy, dx, dy;
	while (cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy) {
		if (ax > dx || bx < cx || ay > dy || by < cy) {
			cout << "NO";
		} else {
			cout << "YES";
		}
		cout << endl;
	}
	return 0;
}