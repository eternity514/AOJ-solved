#include <cstdio>
#include <algorithm>

int n, x, y, b, p;

int main(){
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int ans;
        scanf("%d %d %d %d", &x, &y, &b, &p);

        ans = x * b + y * p;
        if(b < 5 && p >= 2 && (int)((x * 5 + y * p) * 0.8) < ans)
        ans = (int)((x * 5 + y * p) * 0.8);
        if(b >= 5 && p < 2 && (int)((x * b + y * 2) * 0.8) < ans)
        ans = (int)((x * b + y * 2) * 0.8);
        if(b < 5  && p < 2 && (int)((x * 5 + y * 2) * 0.8) < ans)
        ans = (int)((x * 5 + y * 2) * 0.8);
        if(b >= 5 && p >= 2 && (int)((x * b + y * p) * 0.8) < ans)
        ans = (int)((x * b + y * p) * 0.8);

        printf("%d\n", ans);


    }

    return 0;
}
