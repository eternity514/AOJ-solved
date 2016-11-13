#include <cstdio>
using namespace std;
 
#define SIZE 10
 
 
int main() {
    int l[SIZE] = { 0 }, v1, v2;
    double s;
    char t;
    while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&v1,&v2) != EOF) {
        s = 0;
        for (int i = 0; i < SIZE; i++) {
            s += l[i];
        }
        s = s * v1 / (v1 + v2);
 
        for (int i = 0; i < 10; i++) {
            s -= l[i];
            if (s <= 0) {
                printf("%d\n", i + 1);
                break;
            }
        }
    }
    return 0;
}