#include <cstdio>


int l, sum, m, n, j;
bool f;

int main(){
    while(scanf("%d", &l) != EOF){
        if(l == 0) break;
        sum = 0;
        f = false;
        for(int i = 0; i < 12; i++){
            scanf("%d %d", &m, &n);
            sum += m - n;

            if(sum >= l && !f){
                j = i + 1;
                f = true;
            }
        }

        if(!f) printf("NA\n");
        else printf("%d\n", j);
    }

    return 0;
}
