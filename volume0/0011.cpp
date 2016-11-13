#include <iostream>
#include <cstdio>
 
#define SIZE 30
 
using namespace std;
 
int main() {
    int w, n, a, b, temp, node[SIZE];
    cin >> w >> n;
 
    for (int i = 0; i < w; i++) {
        node[i] = i + 1;
    }
 
    for (int i = 0; i < n; i++) {
        scanf("%d,%d", &a, &b);
 
        temp = node[a - 1];
        node[a - 1] = node[b - 1];
        node[b - 1] = temp;
    }
 
    for (int i = 0; i < w; i++) {
        cout << node[i] << endl;
    }
    return 0;
}