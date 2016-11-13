#include <iostream>
#include <string>
 
#define SIZE 3
 
using namespace std;
 
int main() {
    string str, value[SIZE] = {"the", "this", "that"};
    bool judge;
    while (getline(cin, str)) {
        judge = false;
        for (;;) {
            for (int j = 0; j < str.size(); j++) {
                if ('a' <= str[j] && str[j] <= 'y') {
                    str[j]++;
                }
                else if (str[j] == 'z') {
                    str[j] = 'a';
                }
            }
 
            for (int j = 0; j < SIZE; j++) {
                if (str.find(value[j]) != str.npos) {
                    judge = true;
                }
            }
 
            if (judge) {
                cout << str << endl;
                break;
            }
        }
    }
 
    return 0;
}