class Solution {
public:
        string longestCommonPrefix(vector<string>& strs) {
        string pref = "";
        for(int i=0;i<strs[0].length();i++){
            bool isCommon = true;
            char ch  = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j]=="")return "";
                if(i>strs[j].length()-1 || (i<strs[j].length() && strs[j][i]!=ch)){
                    
                    
                    isCommon = false;
                    break;
                }
            }
            if(isCommon){
                pref.push_back(ch);
                
            }
            else break;
        }
        return pref;
        
    }
};