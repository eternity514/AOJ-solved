#include <iostream>
#include <string>
using namespace std;

string a = "apple";
string p = "peach";

int main() {
	string s;
	getline(cin, s);
	int i = 0;

	while (i < s.size()) {
		if (s.substr(i, 5) == "apple") {
			for (int j = 0; j < 5; j++) {
				s[i + j] = p[j];
			}
		} else if(s.substr(i, 5) == "peach") {
			for (int j = 0; j < 5; j++) {
				s[i + j] = a[j];
			}
		}
		i++;
	}
	cout << s << endl;
	return 0;
}