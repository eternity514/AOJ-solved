#include <iostream>
#include <cstring>
 
#define MAX 20
 
using namespace std;
 
int main() {
    char str[MAX];
    cin >> str;
 
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
 
    return 0;
}