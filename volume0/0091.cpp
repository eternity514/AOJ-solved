#include <cstdio>
#include <algorithm>


int N, map[10][10], dx[3] = {0, 1, 0}, dy[3] = {1, 1, 2};
int x[12], y[12], bl[12];


bool check(int x, int y, int t){
    int u = 1;
    if(t > 0) u = 2;
    for(int i = -u; i <= u; i++){
        for(int j = -u; j <= u; j++){
            if(std::abs(i) + std::abs(j) > u) continue;
            if(t == 1 && (i == 0 && std::abs(j) == 2 || j == 0 && std::abs(i) == 2)) continue;
            if(x + j >= 10 || y + i >= 10 || x + j < 0 || y + i < 0) return false;
            if(!map[y + i][x + j]) return false;
        }
    }
    return true;
}

void ss(int x, int y, int t, int v){
    //v‚ª-‚ÌŽžõ‚Ý‚ðŽæ‚èA+‚ÌŽžõ‚Ý‚ð–ß‚·
    int u = 1;
    if(t > 0) u = 2;
    for(int i = -u; i <= u; i++){
        for(int j = -u; j <= u; j++){
            if(std::abs(i) + std::abs(j) > u) continue;
            if(t == 1 && (i == 0 && std::abs(j) == 2 || j == 0 && std::abs(i) == 2)) continue;
            if(x + j >= 10 || y + i >= 10 || x + j < 0 || y + i < 0) continue;
            map[y + i][x + j] += v;
        }
    }
}

bool solve(int n){
    if(n == N){
        for(int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if(map[i][j]) return false;
            }
        }

        for(int i = 0; i < N; i++){
            printf("%d %d %d\n", x[i], y[i], bl[i]);
        }
        return true;
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(!map[i][j]) continue;

            for(int k = 0; k < 3; k++){
                if(!check(j + dx[k], i + dy[k], k)) continue;
                ss(j + dx[k], i + dy[k], k, -1); //õ‚Ý‚ðŽæ‚é

                x[n] = j + dx[k]; y[n] = i + dy[k]; bl[n] = k + 1;
                if(solve(n + 1)) return true;
                ss(j + dx[k], i + dy[k], k, 1); //õ‚Ý‚ð–ß‚·
            }
            return false;
        }
    }

    return false;
}

int main(){
    scanf("%d", &N);
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            scanf("%d", &map[i][j]);
        }
    }

    solve(0);


    return 0;
}
