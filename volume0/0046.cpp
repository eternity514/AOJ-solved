#include <iostream>
using namespace std;

int main(){
	double n, ma = 0, mi = 1000000;
	while (cin >> n) {
		if (n > ma) ma = n;
		if (n < mi) mi = n;
	}
	cout << (ma - mi) << endl;
	return 0;
}