#include <iostream>
#include <stack>
 
using namespace std;
 
int main() {
    int n;
    stack<int> s;
    while (cin >> n) {
        if (n == 0) {
            cout << s.top() << endl;
            s.pop();
        }
        else {
            s.push(n);
        }
    }
    return 0;
}