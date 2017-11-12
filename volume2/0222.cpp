#include <cstdio>
#include <algorithm>
 
#define MAX 10000001
 
bool prime[MAX];
int n;
 
void primeSieve(){
    std::fill(prime, prime + MAX, true);
    prime[0] = prime[1] = true;
 
    for(int i = 2; i * i <= MAX; i++){
        for(int j = 2; i * j <= MAX; j++){
            if(!prime[i * j]) continue;
            prime[i * j] = false;
        }
    }
}
 
int main(){
    primeSieve();
    while(1){
        scanf("%d", &n);
 
        if(n == 0) break;
 
        int ans = 0;
        for(int i = n; i >= 8; i--){
            if(prime[i] && prime[i - 2] && prime[i - 6] && prime[i - 8]){
                ans = i;
                break;
            }
        }
 
        printf("%d\n", ans);
    }
 
    return 0;
}