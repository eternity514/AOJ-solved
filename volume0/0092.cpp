#include <iostream>
#include <string>
#include <algorithm>


int main(){
    int n;
    while(std::cin >> n){
        if(n == 0) break;

        int dp[n][n], ans = 0;

        for(int i = 0; i < n; i++){
            std::string str;
            std::cin >> str;

            for(int j = 0; j < n; j++){
                if(str[j] == '*'){
                    dp[i][j] = 0;
                }else{
                    if(i > 0 && j > 0){
                        dp[i][j] = std::min(dp[i - 1][j], std::min(dp[i][j - 1], dp[i - 1][j - 1])) + 1;
                    }else{
                        dp[i][j] = 1;
                    }
                    ans = std::max(ans, dp[i][j]);
                }
            }
        }

        std::cout << ans << std::endl;

    }
    return 0;
}
