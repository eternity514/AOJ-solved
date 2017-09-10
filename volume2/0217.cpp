#include <cstdio>

int n, p, d1, d2, mp, md;

int main(){
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;

        md = 0;
        for(int i = 0; i < n; i++){
            scanf("%d %d %d", &p, &d1, &d2);

            if(d1 + d2 > md){
                mp = p;
                md = d1 + d2;
            }
        }

        printf("%d %d\n", mp, md);
    }

    return 0;
}
