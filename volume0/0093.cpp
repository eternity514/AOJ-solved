#include <cstdio>


int a, b;

bool ly[3001];

int main(){
    for(int i = 0; i <= 3000; i++){
        if(i % 400 == 0){
            ly[i] = true;
            continue;
        }

        if(i % 100 == 0){
            continue;
        }

        if(i % 4 == 0){
            ly[i] = true;
        }
    }

    bool f = false;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a == 0 && b == 0) break;
        if(f) printf("\n");
        else f = true;

        bool j = true;
        for(; a <= b; a++){
            if(ly[a]){
                printf("%d\n", a);
                j = false;
            }
        }

        if(j) printf("NA\n");
    }

    return 0;
}
