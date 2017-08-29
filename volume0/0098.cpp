#include <cstdio>

int n, sum[101][101];

int main(){
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int tmp;
            scanf("%d", &tmp);
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + tmp;
        }
    }


    int s, ans = sum[1][1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = i; k <= n; k++){
                for(int l = j; l <= n; l++){
                    s = sum[k][l] - sum[k][j - 1] - sum[i - 1][l] + sum[i - 1][j - 1];
                    if(s > ans) ans = s;
                }
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}
