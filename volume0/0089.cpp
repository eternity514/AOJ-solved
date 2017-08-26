#include <iostream>
#include <string>
#include <algorithm>
 
std::string str;
int input[51][51], memo[60][60], hoge[5], mx = 0, o = 0;
 
void makes(){
    std::string tmp = "";
    int cnt = 0;
    o = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == ','){
            hoge[cnt] = std::atoi(tmp.c_str());
            cnt++;
            o++;
 
            tmp = "";
            continue;
        }
 
        tmp += str[i];
    }
    hoge[cnt] = std::atoi(tmp.c_str());
    for(int i = cnt + 1; i < 5; i++){
        hoge[i] = 0;
    }
}
 
int main(){
    int u = 0;
    while(getline(std::cin, str)){
 
        makes();
        mx = std::max(mx, o + 1);
        o++;
 
        for(int i = 0; i < o; i++){
            input[mx - i - 1][mx - o + i] = hoge[i];
        }
    }
 
    memo[0][0] = input[0][0];
    for(int i = 0; i < mx; i++){
        for(int j = 0; j < mx; j++){
            if(memo[i][j] > 0){
                    memo[i][j + 1] = std::max(memo[i][j + 1], memo[i][j] + input[i][j + 1]);
                    memo[i + 1][j] = std::max(memo[i + 1][j], memo[i][j] + input[i + 1][j]);
                }else{
                    memo[i][j + 1] = memo[i][j] + input[i][j + 1];
                    memo[i + 1][j] = memo[i][j] + input[i + 1][j];
                }
        }
    }
 
 
    std::cout << memo[mx - 1][mx - 1] << std::endl;
 
    return 0;
}