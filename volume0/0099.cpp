#include <cstdio>
#include <queue>
#include <vector>

#define MAX 1000000

typedef std::pair<int, int> P;

int n, q, as[MAX];

int main(){
    std::priority_queue<P> que;

    scanf("%d %d", &n, &q);
    for(int i = 0; i < q; i++){
        int a, v;
        scanf("%d %d", &a, &v);
        as[a - 1] += v;

        que.push(P(as[a - 1], -1 * (a - 1)));
        while(!que.empty()){
            P p = que.top();

            if(as[-1 * (p.second)] == p.first){
                printf("%d %d\n", -1 * p.second + 1, p.first);
                break;
            }
            que.pop();
        }
    }

    return 0;
}
