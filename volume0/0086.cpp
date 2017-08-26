#include <cstdio>
#include <algorithm>
 
int size;
int e[100];
 
bool solve(){
    if(e[0] % 2 == 0 || e[1] % 2 == 0) return false;
 
    for(int i = 2; i < 100; i++){
        if(e[i] % 2 != 0) return false;
    }
 
    return true;
}
 
int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        std::fill(e, e + 100, 0);
 
        e[a - 1]++;
        e[b - 1]++;
 
        while(1){
            scanf("%d %d", &a, &b);
            if(a == 0 && b == 0) break;
 
            e[a - 1]++;
            e[b - 1]++;
 
        }
 
        if(solve()){
            printf("OK\n");
        }else{
            printf("NG\n");
        }
    }
 
    return 0;
}