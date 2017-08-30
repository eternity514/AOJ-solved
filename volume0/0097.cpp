#include <cstdio>
#include <algorithm>
 
 
int n, s;
long long dp[11][1001];
 
 
int main(){
    for(int i = 0; i < 11; i++){ std::fill(dp[i], dp[i] + 1001, 0); }
    dp[0][0] = 1;
 
    for(int i = 0; i <= 100; i++){
        for(int j = 9; j >= 0; j--){
            for(int k = 0; k + i <= 1000; k++){
                if(!dp[j][k]) continue;
 
                dp[j + 1][k + i] += dp[j][k];
            }
        }
    }
 
    while(scanf("%d %d", &n, &s) != EOF){
        if(n == 0 && s == 0) break;
 
        printf("%lld\n", dp[n][s]);
    }
 
    return 0;
}