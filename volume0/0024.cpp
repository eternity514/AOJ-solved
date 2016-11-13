#include <iostream>
 
using namespace std;
 
int main() {
    double v;
 
    while (cin >> v) {
        v = 4.9 * ((v / 9.8) * (v / 9.8));
 
        for (int i = 1; ; i++) {
            if (5 * i - 5 > v) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}