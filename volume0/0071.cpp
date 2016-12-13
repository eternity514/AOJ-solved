#include <iostream>
#include <string>
using namespace std;

bool map[8][8] = { 0 };
int siz[3] = { 1,2,3 }, dir[2][4] = { {1,0, -1,0},{0,1,0,-1} };
void bomb(int x, int y) {
	if (x < 0 || y < 0 || x >= 8 || y >= 8 || !map[y][x]) return;

	map[y][x] = false;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			bomb(x + dir[0][i] * siz[j], y + dir[1][i] * siz[j]);
		}
	}
}

int main() {
	int n, x, y;
	string str;
	cin >> n;
	for (int l = 1; l <= n; l++) {
		for (int i = 0; i < 8; i++) {
			cin >> str;

			for (int j = 0; j < 8; j++) {
				if (str[j] == '1') map[i][j] = true;
				else map[i][j] = false;
			}
		}
		cin >> x >> y;
		bomb(x - 1, y - 1);

		cout << "Data " << l << ":" << endl;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cout << map[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}