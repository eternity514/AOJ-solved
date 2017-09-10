#include <cstdio>
#include <cmath>


int r, a, dr[10], da[10], cnt[10];
int hit, bro;

int main(){
    while(scanf("%d %d", &r, &a)){
        if(r == 0 && a == 0) break;

        for(int i = 0; i < 10; i++){
            dr[i] = 0;
            da[i] = 0;
            cnt[i] = 0;
        }

        hit = bro = 0;
        for(int i = 3; i >= 0; i--){
            dr[i] = (int)(r / pow(10, i)) % 10;
            da[i] = (int)(a / pow(10, i)) % 10;

            if(dr[i] == da[i]) hit++;
            else{
                cnt[dr[i]]++;
                cnt[da[i]]++;
            }
        }

        for(int i = 0; i < 10; i++){
            if(cnt[i] > 1) bro++;
        }

        printf("%d %d\n", hit, bro);

    }

    return 0;
}
