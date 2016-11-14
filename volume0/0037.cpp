#include <iostream>
#include <string>
using namespace std;
 
bool map[11][11] = { false };
int x = 1, y = 1, vec = 0;
int dir[4] = {3, 0, 1, 2};
int dx[2][4] = { {1, 0, -1, 0}, {2, 0, -2, 0} };
int dy[2][4] = { {0, 1, 0, -1}, {0, 2, 0, -2} };
string opr[] = { "R", "D", "L", "U" };
 
void solve() {
    int tmp = 0;
    bool next = true;
    while (next) {
        for (int i = 0; i < 4; i++) {
            tmp = (dir[vec] + i) % 4;
            if (map[y + dy[0][tmp]][x + dx[0][tmp]]) {
                y += dy[1][tmp];
                x += dx[1][tmp];
 
                vec = tmp;
                cout << opr[tmp];
                if (x == 1 && y == 1) next = false;
                break;
            }
        }
    }
    cout << endl;
}
 
int main() {
    string str;
    int tmp;
    for (int i = 0; i < 9; i++) {
        cin >> str;
        if (i % 2 == 0) {
            for (int j = 0; j < 4; j++) {
                tmp = str[j] - '0';
                if (tmp == 1) {
                    map[(i / 2) * 2 + 1][j * 2 + 1] = true;
                    map[(i / 2) * 2 + 1][(j + 1) * 2] = true;
                    map[(i / 2) * 2 + 1][(j + 1) * 2 + 1] = true;
                }
            }
        } else {
            for (int j = 0; j < 5; j++) {
                tmp = str[j] - '0';
                if (tmp == 1) {
                    map[(i / 2 + 1) * 2][j * 2 + 1] = true;
                    map[(i / 2 + 1) * 2 + 1][j * 2 + 1] = true;
                }
            }
        }
    }
    solve();
 
    return 0;
}