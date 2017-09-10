#include <cstdio>

int t, sum, c[] = {1, 5, 10, 50, 100, 500};

int main(){
    for(int i = 0; i < 6; i++){
        scanf("%d", &t);

        sum += c[i] * t;
    }

    if(sum >= 1000) printf("1\n");
    else printf("0\n");

    return 0;
}
