#include <cstdio>
#include <algorithm>

int n, dp[4001];

int main(){
    for(int a = 0; a <= 1000; a++){
        for(int b = 0; b <= 1000; b++){
            dp[a + b]++;
        }
    }

    while(scanf("%d", &n) != EOF){
        int ans = 0;

        for(int i = 0; i <= 2000; i++){
            if(n - i < 0 || n - i > 2000) continue;
            ans += dp[i] * dp[n - i];
        }

        printf("%d\n", ans);
    }

    return 0;
}
