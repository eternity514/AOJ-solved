#include <cstdio>
#include <algorithm>

int n, tmp;

int main(){
    while(scanf("%d", &n) != EOF){
        if(n == 0) break;

        int ice[10];
        std::fill(ice, ice + 10, 0);

        for(int i = 0; i < n; i++){
            scanf("%d", &tmp);

            ice[tmp]++;
        }

        for(int i = 0; i < 10; i++){
            if(ice[i] == 0) printf("-\n");
            else{
                for(int j = 0; j < ice[i]; j++){
                    printf("*");
                }
                printf("\n");
            }
        }
    }

    return 0;
}
