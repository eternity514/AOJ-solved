#include <cstdio>

int sum = 0, a;

int main(){
    for(int i = 0; i < 10; i++){
        scanf("%d", &a);
        sum += a;
    }

    printf("%d\n", sum);

    return 0;
}
