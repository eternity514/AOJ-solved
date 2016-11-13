#include <iostream>
#include <string>
#include <typeinfo>
#include <cmath>
#include <sstream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string a, b, res;
    int temp, size, hoge, as, bs;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        hoge = 0;
        res = "";
 
        as = a.size();
        bs = b.size();
        size = as > bs ? as : bs;
        while (a.size() < size) { a = "0" + a; }
        while (b.size() < size) { b = "0" + b; }
 
        for (int i = 0; i < size; i++) {
            temp = a[size-i-1]+b[size-i-1]-'0'-'0'+hoge;
 
            stringstream ss;
            ss << temp % 10;
            if (temp > 9) {
                res = ss.str() + res;
                hoge = temp / 10;
            }
            else {
                res = ss.str() + res;
                hoge = 0;
            }
        }
 
        stringstream ss;
        ss << hoge;
        if (hoge > 0) {
            res = ss.str() + res;
        }
         
        if (res.size() > 80) {
            cout << "overflow";
        }
        else {
            cout << res;
        }
        cout << endl;
    }
    return 0;
}