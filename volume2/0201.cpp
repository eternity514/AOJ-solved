#include <iostream>
#include <string>
#include <map>
#include <algorithm>


int n, m, k, p;
std::string s, o;
std::map<std::string, int> mp;

int main(){
    while(std::cin >> n){
        if(n == 0) break;

        for(int i = 0; i < n; i++){
            std::cin >> s >> p;

            mp[s] = p;
        }

        std::cin >> m;
        for(int i = 0; i < m; i++){
            std::cin >> o >> k;

            int tmp = 0;
            for(int j = 0; j < k; j++){
                std::cin >> s;
                tmp += mp[s];
            }
            mp[o] = std::min(mp[o], tmp);
        }

        std::cin >> s;
        std::cout << mp[s] << std::endl;
    }

    return 0;
}
