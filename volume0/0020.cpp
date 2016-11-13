#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
    cout << str << endl;
    return 0;
}