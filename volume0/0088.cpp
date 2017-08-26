#include <iostream>
#include <string>
 
 
std::string encode(char c){
    if(c == ' ') return "101";
    if(c == '\'') return "000000";
    if(c == ',') return "000011";
    if(c == '-') return "10010001";
    if(c == '.') return "010001";
    if(c == '?') return "000001";
    if(c == 'A') return "100101";
    if(c == 'B') return "10011010";
    if(c == 'C') return "0101";
    if(c == 'D') return "0001";
    if(c == 'E') return "110";
    if(c == 'F') return "01001";
    if(c == 'G') return "10011011";
    if(c == 'H') return "010000";
    if(c == 'I') return "0111";
    if(c == 'J') return "10011000";
    if(c == 'K') return "0110";
    if(c == 'L') return "00100";
    if(c == 'M') return "10011001";
    if(c == 'N') return "10011110";
    if(c == 'O') return "00101";
    if(c == 'P') return "111";
    if(c == 'Q') return "10011111";
    if(c == 'R') return "1000";
    if(c == 'S') return "00110";
    if(c == 'T') return "00111";
    if(c == 'U') return "10011100";
    if(c == 'V') return "10011101";
    if(c == 'W') return "000010";
    if(c == 'X') return "10010010";
    if(c == 'Y') return "10010011";
    if(c == 'Z') return "10010000";
    return "";
}
 
std::string encode2(std::string s){
    if(s == "00000") return "A";
    if(s == "00001") return "B";
    if(s == "00010") return "C";
    if(s == "00011") return "D";
    if(s == "00100") return "E";
    if(s == "00101") return "F";
    if(s == "00110") return "G";
    if(s == "00111") return "H";
    if(s == "01000") return "I";
    if(s == "01001") return "J";
    if(s == "01010") return "K";
    if(s == "01011") return "L";
    if(s == "01100") return "M";
    if(s == "01101") return "N";
    if(s == "01110") return "O";
    if(s == "01111") return "P";
    if(s == "10000") return "Q";
    if(s == "10001") return "R";
    if(s == "10010") return "S";
    if(s == "10011") return "T";
    if(s == "10100") return "U";
    if(s == "10101") return "V";
    if(s == "10110") return "W";
    if(s == "10111") return "X";
    if(s == "11000") return "Y";
    if(s == "11001") return "Z";
    if(s == "11010") return " ";
    if(s == "11011") return ".";
    if(s == "11100") return ",";
    if(s == "11101") return "-";
    if(s == "11110") return "'";
    if(s == "11111") return "?";
    return "";
}
 
int main(){
    std::string str, tmp, ans;
    while(getline(std::cin, str)){
        tmp = "", ans = "";
        for(int i = 0; i < str.size(); i++){
            tmp += encode(str[i]);
        }
 
        if(tmp.size() % 5 != 0){
            int n = 5 - (tmp.size() % 5);
            for(int i = 0; i < n; i++) tmp += "0";
        }
 
        for(int i = 0; i < tmp.size(); i += 5){
            ans += encode2(tmp.substr(i, 5));
        }
 
        std::cout << ans << std::endl;
    }
 
    return 0;
}