#include <cstdio>

int t, n, s, f, sum;

int main(){
    while(scanf("%d", &t) != EOF){
        if(t == 0) break;

        scanf("%d", &n);

        sum = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d", &s, &f);

            sum += (f - s);
        }

        if(sum < t) printf("%d\n", t - sum);
        else printf("OK\n");
    }


    return 0;
}
