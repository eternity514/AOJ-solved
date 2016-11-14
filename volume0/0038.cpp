#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string pairs[2][3] = { {"null","one pair","two pair"},
					  {"three card","full house",""} };

int main() {
	int n[5], c, three, two;
	while (scanf("%d,%d,%d,%d,%d",&n[0],&n[1],&n[2],&n[3],&n[4]) != EOF) {
		int card[13] = { 0 }, c = 0, three = 0, two = 0;
		for (int i = 0; i < 5; i++) {
			card[n[i] - 1]++;
		}

		for (int i = 0; i < 13; i++) {
			if (card[i] == 4) {
				c = 114514;
				break;
			} else if (card[i] == 3) {
				three++;
			} else if (card[i] == 2) {
				two++;
			} else if (card[i] == 1) {
				c++;
				if (c == 5) {
					break;
				}

				if (c == 4 && i == 12 && card[0] == 1) {
					c = 5;
					break;
				}
			} else if(card[i] == 0 && c != 0) {
				c = 0;
			}
		}

		if (c == 5) {
			cout << "straight" << endl;
		} else if (c == 114514) {
			cout << "four card" << endl;
		} else {
			cout << pairs[three][two] << endl;
		}
	}

	return 0;
}