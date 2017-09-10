#include <cstdio>

int a, b ,c;
int da[] = {1, 0, 1, 0, 0};
int db[] = {0, 1, 1, 0, 0};
int dc[] = {0, 0, 0, 1, 0};
bool ans[] = {0, 0, 1, 1, 0};


int main(){
    scanf("%d %d %d", &a, &b, &c);

    for(int i = 0; i < 5; i++){
        if(a == da[i] && b == db[i] && c == dc[i]){
            if(ans[i]) printf("Open\n");
            else printf("Close\n");
        }
    }


    return 0;
}
