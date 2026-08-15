class Solution {
public:
    int maxScore(string s) {
        int total = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                total++;
            }
        }
        int score = -1;
        int zc = 0;
        int prefSum=0;
        if(s[0]=='0')zc++;
        else prefSum++;
        for(int i=1;i<s.length();i++){
            
            score = max(score, zc + total-prefSum);
            if(s[i]=='0')zc++;
            else prefSum++;
        }
        return score;
    }
};