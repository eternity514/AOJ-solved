#include <iostream>
#include <string>
using namespace std;
 
#define SIZE 8
 
int main() {
    string source[SIZE];
    while (cin >> source[0]) {
        for (int i = 1; i < SIZE; i++) {
            cin >> source[i];
        }
 
        bool map[14][14] = {false}, f = true;
        int x = SIZE, y = SIZE;
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                map[i + 3][j + 3] = (source[i][j] == '1' ? true : false);
                if (map[i + 3][j + 3] && f) {
                    x = j;
                    y = i;
                    f = false;
                }
            }
        }
 
        x += 3;
        y += 3;
 
        if (map[y + 1][x + 1] && map[y][x + 1] && map[y + 1][x]) {
            cout << "A";
        } 
        if (map[y + 1][x + 1] && map[y + 2][x + 1] && map[y + 1][x]) {
            cout << "F";
        }
        if (map[y + 1][x + 1] && map[y + 1][x + 2] && map[y][x + 1]) {
            cout << "E";
        }
        if (map[y + 1][x - 1] && map[y][x + 1] && map[y + 1][x]) {
            cout << "G";
        }
        if (map[y + 1][x - 1] && map[y + 2][x - 1] && map[y + 1][x]) {
            cout << "D";
        }
        if (map[y + 1][x] && map[y + 2][x] && map[y + 3][x]) {
            cout << "B";
        }
        if (map[y][x + 1] && map[y][x + 2] && map[y][x + 3]) {
            cout << "C";
        }
        cout << endl;
    }
    return 0;
}