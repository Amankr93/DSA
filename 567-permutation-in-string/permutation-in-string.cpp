class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();
        if(m>n)return false;
        map<char,int>mp;
        for(auto ch:s1){
            mp[ch]++;
        }
        int count = m;
        int i=0;
        for(int j = 0;j<n;j++){
            if(mp[s2[j]]>0){
                count--;
            }
            mp[s2[j]]--;
            if(j-i+1> m){
                if(mp[s2[i]]>=0){
                    count++;
                }
                mp[s2[i]]++;
                i++;
            }
            if(count == 0 && j-i+1 == m){
                return true;
            }
        }
        return false;
    }
};