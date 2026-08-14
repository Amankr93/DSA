class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // map<char, int> freq1;
        // map<char, int> freq2;
        int m = s.length();
        int n = p.length();
        vector<int>ans;
        if(m<n)return ans;
        map<char,int>mp;
        for(auto ch:p){
            mp[ch]++;
        }
        int count = n;
        int i=0;
        for(int j = 0;j<m;j++){
            if(mp[s[j]]>0){
                count--;
            }
            mp[s[j]]--;
            if(j-i+1> n){
                if(mp[s[i]]>=0){
                    count++;
                }
                mp[s[i]]++;
                i++;
            }
            if(count == 0&& j-i+1 == n){
                ans.push_back(i);
            }
        }
        // for(int i = 0 ; i<p.length();i++){
        //     freq1[p[i]]++;
        //     freq2[s[i]]++;
        // }
        // // int i=0; 
        // sort(p.begin(), p.end());
        
        // for(int j=p.length()-1;j<s.length();j++){
            // int k=i;
            // bool found = true;
            // while(k<=j){
            //     if(freq1[s[k]]!=freq2[s[k]])
            //     {
            //         found = false;
            //         break;
            //     }
            //     k++;
            // }
            // if(found){
            //     ans.push_back(i);
            // }
            // // while(k<=j){
            // //     if()
            // // }
            // freq2[s[i]]--;
            // if(j+1<m)freq2[s[j+1]]++;
            // i++;
        
        // }

        return ans;
        
    }
};