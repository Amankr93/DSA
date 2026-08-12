class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string, int> mp;
        int i = 0;
        if(s.length()<10)return {};
        vector<string> ans;
        while(i<=s.length()-10){
            string temp(s, i,10);
            mp[temp]++;
            if(mp[temp]==2)ans.push_back(temp);
            i++;
           
        }
        return ans;
        
    }
};