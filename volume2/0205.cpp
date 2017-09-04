#include <cstdio>


int a[3], h[5];

int main(){
    while(scanf("%d", &h[0]) != EOF){
        if(h[0] == 0) break;

        a[h[0] - 1]++;
        for(int i = 1; i < 5; i++){
            scanf("%d", &h[i]);
            a[h[i] - 1]++;
        }

        if((a[0] > 0 && a[1] > 0 && a[2] > 0) || a[0] == 5 || a[1] == 5 || a[2] == 5) printf("3\n3\n3\n3\n3\n");
        else{
            int w;
            if(!a[0]) w = 1;
            if(!a[1]) w = 2;
            if(!a[2]) w = 0;

            for(int i = 0; i < 5; i++){
                if(w == h[i] - 1) printf("1\n");
                else printf("2\n");
            }
        }

        for(int i = 0; i < 3; i++) a[i] = 0;
    }
    return 0;
}
