class Solution {
public:
    int longestSubstring(string s, int k) {
        int n= s.length();
        if(n<k)return 0;
        map<char, int> mp;
        for(int i=0 ; i< n;i++){
            mp[s[i]]++;
        }
        for(int i=0 ; i<n;i++){
            if(mp[s[i]]<k){
                int leftRes = longestSubstring(s.substr(0,i),k);
                int rightRes = longestSubstring(s.substr(i+1),k);
                return max(leftRes, rightRes);
            }
        }
        return n;
  
        
        
    }
};