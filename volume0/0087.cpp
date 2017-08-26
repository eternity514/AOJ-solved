#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <cctype>
#include <cstdio>
#include <cstdlib>
 
 
int main(){
 
    std::string str;
    while(getline(std::cin, str)){
        std::stack<double> st;
        std::stringstream ss(str);
 
        while(ss >> str){
            if(str.size() > 1 || isdigit(str[0])){
                st.push(atof(str.c_str()));
                continue;
            }
 
            double a = st.top(); st.pop();
            double b = st.top(); st.pop();
            switch(str[0]){
            case '+' : st.push(b + a); break;
            case '-' : st.push(b - a); break;
            case '*' : st.push(b * a); break;
            case '/' : st.push(b / a);
            }
        }
 
        printf("%lf\n", st.top());
 
    }
 
    return 0;
}