#include <cstdio>
#include <algorithm>


int n, x, v[30];
bool cost[1000001], prime[1000001];
int main(){
    std::fill(prime, prime + 1000001, true);
    prime[1] = false;
    for(int i = 2; i * i <= 1000001; i++){
        for(int j = 2; i * j <= 1000001; j++){
            if(!prime[i * j]) continue;
            prime[i * j] = false;
        }
    }

    while(scanf("%d %d", &n, &x) != EOF){
        if(n == 0 && x == 0) break;


        std::fill(cost, cost + 1000001, false);
        cost[0] = true;
        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);

            for(int j = v[i]; j <= x; j += v[i]) cost[j] = true;
        }

        int ans = 0;
        for(int i = 1; i <= x; i++){
            if(!cost[i]){
                for(int j = 0; j < n; j++){
                    if(i - v[j] >= 0 && cost[i - v[j]]){
                        cost[i] = true;
                        break;
                    }
                }
            }
            if(cost[i] && prime[i]){
                ans = i;
            }
        }

        if(ans == 0) printf("NA\n");
        else printf("%d\n", ans);
    }

    return 0;
}
