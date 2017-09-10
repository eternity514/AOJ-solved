#include <cstdio>


int w;

int main(){
    while(scanf("%d", &w) != EOF){
        if(w == -1) break;


        if(w <= 10){
            printf("%d\n", 4280 - 1150);
        }else if(w <= 20){
            printf("%d\n", 4280 - (1150 + (w - 10) * 125));
        }else if(w <= 30){
            printf("%d\n", 4280 - (1150 + 1250 + (w - 20) * 140));
        }else if(w >  30){
            printf("%d\n", 4280 - (1150 + 1250 + 1400 + (w - 30) * 160));
        }
    }

    return 0;
}
