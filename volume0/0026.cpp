#include <iostream>
 
#define SIZE 10
 
using namespace std;
 
int map[SIZE][SIZE] = {0};
 
void drop(int x, int y) {
    if (0 <= x && x < SIZE && 0 <= y && y < SIZE) {
        map[x][y]++;
    }
}
 
int main() {
    int x, y, s, count = 0, most = 0;
    char e;
    while (cin>>x>>e>>y>>e>>s) {
        drop(x, y);
        drop(x, y + 1);
        drop(x + 1, y);
        drop(x, y - 1);
        drop(x - 1, y);
 
        if (s > 1) {
            drop(x + 1, y + 1);
            drop(x + 1, y - 1);
            drop(x - 1, y - 1);
            drop(x - 1, y + 1);
        }
 
        if (s > 2) {
            drop(x, y + 2);
            drop(x, y - 2);
            drop(x + 2, y);
            drop(x - 2, y);
        }
    }
 
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (map[i][j] > most) {
                most = map[i][j];
            }
 
            if (map[i][j] == 0) {
                count++;
            }
        }
    }
 
    cout << count << endl << most << endl;
    return 0;
}