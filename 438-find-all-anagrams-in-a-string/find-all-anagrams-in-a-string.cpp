class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        map<char, int> freq1;
        map<char, int> freq2;
        int m = s.length();
        int n = p.length();
        if(m<n)return {};
        for(int i = 0 ; i<p.length();i++){
            freq1[p[i]]++;
            freq2[s[i]]++;

        }
        int i=0; 
        vector<int>ans;
        for(int j=p.length()-1;j<s.length();j++){
            int k=i;
           
            bool found = true;
            while(k<=j){
                if(freq1[s[k]]!=freq2[s[k]])
                {
                    found = false;
                    break;
                }
                k++;
            }
            if(found){
                ans.push_back(i);
            }
            // while(k<=j){
            //     if()
            // }
            freq2[s[i]]--;
            if(j+1<m)freq2[s[j+1]]++;
            i++;
        }
        return ans;
        
    }
};