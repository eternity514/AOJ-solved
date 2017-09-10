#include <cstdio>

int n, k, p;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &k, &p);

        int ans = k % p;
        if(ans == 0) printf("%d\n", p);
        else printf("%d\n", ans);
    }

    return 0;
}
