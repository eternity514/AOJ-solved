#include <cstdio>
#include <algorithm>

int n, m;


int main(){
    while(scanf("%d %d", &n, &m) != EOF){
        if(n == 0 && m == 0) break;

        int p[1000];
        std::fill(p, p + 1000, 0);
        for(int i = 0; i < n; i++){
            scanf("%d", &p[i]);
            p[i] = -p[i];
        }

        std::sort(p, p + n);

        int ans = 0;
        for(int i = 0; i < n; i++){
            if((i + 1) % m == 0) continue;
            ans += p[i];
        }

        printf("%d\n", -ans);
    }

    return 0;
}
