#include <cstdio>


int m[100][100], w, h, xs, ys, xg, yg, n;
int c, d, x, y, col;


bool solve(int X, int Y){
    if(X < 0 || X >= w || Y < 0 || Y >= h) return false;

    if(m[Y][X] != col) return false;
    if(Y == yg && X == xg) return true;

    m[Y][X] = 0;

    if(solve(X + 1, Y)) return true;
    if(solve(X - 1, Y)) return true;
    if(solve(X, Y + 1)) return true;
    if(solve(X, Y - 1)) return true;

    return false;
}


int main(){
    while(scanf("%d %d", &w, &h) != EOF){
        if(w == 0 && h == 0) break;

        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                m[i][j] = 0;
            }
        }

        scanf("%d %d", &xs, &ys);
        scanf("%d %d", &xg, &yg);
        scanf("%d", &n);

        xs--; ys--;
        xg--; yg--;

        for(int i = 0; i < n; i++){
            scanf("%d %d %d %d", &c, &d, &x, &y);
            x--; y--;

            if(d == 0){
                for(int i = y; i < y + 2; i++){
                    for(int j = x; j < x + 4; j++){
                        m[i][j] = c;
                    }
                }
            }else if(d == 1){
                for(int i = y; i < y + 4; i++){
                    for(int j = x; j < x + 2; j++){
                        m[i][j] = c;
                    }
                }
            }
        }

        col = m[ys][xs];
        if(col == 0){
            printf("NG\n");
            continue;
        }
        if(solve(xs, ys)){
            printf("OK\n");
        }else{
            printf("NG\n");
        }

    }

    return 0;
}
