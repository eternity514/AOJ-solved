#include <iostream>
#include <cstdio>
#include <cmath>
 
using namespace std;
 
int main() {
    double x1, y1, x2, y2, x3, y3;
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double x = ((y1-y3)*(y1*y1-y2*y2+x1*x1-x2*x2)-(y1-y2)*(y1*y1-y3*y3+x1*x1-x3*x3))/(2*(y1-y3)*(x1-x2)-2*(y1-y2)*(x1-x3));
        double y = ((x1-x3)*(x1*x1-x2*x2+y1*y1-y2*y2)-(x1-x2)*(x1*x1-x3*x3+y1*y1-y3*y3))/(2*(x1-x3)*(y1-y2)-2*(x1-x2)*(y1-y3));
 
        printf("%.3f %.3f %.3f\n", x, y, sqrt(pow((x1 - x), 2) + pow((y1 - y), 2)));
    }
    return 0;
}