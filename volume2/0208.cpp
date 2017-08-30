#include <cstdio>
#include <string>


int main(){
    char o[] = {'0','1','2','3','5','7','8','9'};
    char res[255];
    long long n = 10;

    while(scanf("%lld", &n) != EOF){
        if(n == 0) break;
        sprintf(res, "%llo", n);

        for(int i = 0; i < 255; i++){
            if(res[i] == '\0') break;
            res[i] = o[res[i] - '0'];
        }

        printf("%s\n", res);
    }

    return 0;
}
