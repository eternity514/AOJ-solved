#include <cstdio>
#include <queue>
#include <map>

//ez of ezs
int n, e, p, q;
 
int main(){
    while(1){
        scanf("%d", &n);
        if(!n) break;
 
        std::map<int, int> m;
        std::queue<int> que;
 
        for(int i = 0; i < n; i++){
            scanf("%d %d %d", &e, &p, &q);
 
            if(m.count(e) != 0){
                m[e] += (p * q);
            }else{
                m[e] = p * q;
                que.push(e);
            }
        }
 
        bool flag = true;
        while(!que.empty()){
            int tmp = que.front(); que.pop();
 
            if(m[tmp] >= 1000000){
                printf("%d\n", tmp);
                flag = false;
            }
        }
 
        if(flag){
            printf("NA\n");
        }
    }
 
    return 0;
}
