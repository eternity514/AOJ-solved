#include <cstdio>
#include <queue>


typedef std::pair<int, int> P;
int n;

int main(){
    scanf("%d", &n);

    std::priority_queue<P> que;
    for(int i = 0; i < n; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        que.push(P(b, a));
    }

    P p = que.top(); que.pop();
    while(!que.empty()){
        P q = que.top(); que.pop();

        if(q.first < p.first) break;

        if(p.second > q.second){
            p = q;
        }
    }
    printf("%d %d\n", p.second, p.first);

    return 0;
}
