class Solution {
public:
int values(char c){
    if(c=='I')return 1;
    if(c=='V')return 5;
    if(c=='X')return 10;
    if(c=='L')return 50;
    if(c=='C')return 100;
    if(c=='D')return 500;
    if(c=='M')return 1000;
    return -1;
}

    int romanToInt(string s) {
        int res = 0;
        int i=0;
        for( i=0; i+1<s.length();i++){
            if(values(s[i+1])> values(s[i])){
                res -=values(s[i]);
            }
            else{
                res +=values(s[i]);
            }
        }
        res +=values(s[i]);
        return res;
    }
};