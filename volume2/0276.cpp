#include <cstdio>

int a, b;

int main(){
    for(int i = 0; i < 7; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a - b);
    }

    return 0;
}
