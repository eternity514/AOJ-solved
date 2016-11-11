#include <iostream>
#include <algorithm>
 
#define MAX 10
 
using namespace std;
 
int main() {
 
    int list[MAX];
 
    for (int i = 0; i < MAX; i++) {
        cin >> list[i];
    }
 
    sort(list, list+MAX);
    for (int i = 0; i < 3; i++) {
        cout << list[MAX-i-1] << endl;
    }
 
    return 0;
}