#include <cstdio>

int a, t, b[] = {6000, 4000, 3000, 2000};

int main(){
    for(int i = 0; i < 4; i++){
        scanf("%d %d", &a, &t);
        printf("%d\n", b[a - 1] * t);
    }

    return 0;
}
