#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int n, ans;
    double x1, y1, r1, x2, y2, r2, dis;
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dis = hypot(x2 - x1, y2 - y1);
        ans = 0;
 
        if (dis < r1 - r2) { ans = 2; }
        else if (dis < r2 - r1) { ans =  -2; }
        else if (r1 + r2 >= dis) { ans = 1; }
 
        cout << ans << endl;
    }
    return 0;
}