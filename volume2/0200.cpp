#include <cstdio>
#include <algorithm>

#define INF 114514810
#define MAX 100

int n, m, k;
int ti[MAX][MAX], co[MAX][MAX];

int main(){
    while(scanf("%d %d", &n, &m) != EOF){
        if(n == 0 && m == 0) break;

        int a, b, c, t;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < m; j++){
                ti[i][j] = INF;
                co[i][j] = INF;
            }
        }

        for(int i = 0; i < n; i++){
            scanf("%d %d %d %d", &a, & b, &c, &t);
            a--; b--;

            ti[a][b] = ti[b][a] = t;
            co[a][b] = co[b][a] = c;
        }

        for(int k = 0; k < m; k++){
            for(int i = 0; i < m; i++){
                for(int j = 0; j < m; j++){
                    co[i][j] = std::min(co[i][j], co[i][k] + co[k][j]);
                    ti[i][j] = std::min(ti[i][j], ti[i][k] + ti[k][j]);
                }
            }
        }

        scanf("%d", &k);
        int p, q, r;
        for(int i = 0; i < k; i++){
            scanf("%d %d %d", &p, &q, &r);
            p--; q--;

            if(r == 0) printf("%d\n", co[p][q]);
            else if(r == 1) printf("%d\n", ti[p][q]);
        }
    }
    return 0;
}
