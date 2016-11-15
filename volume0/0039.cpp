#include <iostream>
#include <string>
#include <map>
using namespace std;
 
int main() {
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
 
    string str = "";
    int sum, n;
    while (cin >> str) {
        sum = 0;
        n = 114514;
        for (int i = 0; i < str.size(); i++) {
            if (m[str[i]] <= n) {
                n = m[str[i]];
                sum += n;
            } else {
                sum += m[str[i]];
                sum -= (n * 2);
                n = 114514;
            }
        }
        cout << sum << endl;
    }
    return 0;
}