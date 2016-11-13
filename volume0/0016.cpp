#include <iostream>
#include <cstdio>
#include <cmath>
 
#define PI 3.14159265358979
#define rad(deg) ((deg) / 180 * PI) 
 
using namespace std;
 
int main() {
    int d, a;
    float x = 0., y = 0., deg = 0.;
 
    while (scanf("%d,%d", &d, &a)) {
        if (d == 0 && a == 0) { break; }
 
        x += d * sin(rad(deg));
        y += d * cos(rad(deg));
 
        deg += a;
    }
 
    cout << (int)x << endl << (int)y << endl;
    return 0;
}