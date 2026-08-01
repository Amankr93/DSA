class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            bool isPresent = true;
            for(int j=0;j<needle.length();j++){
                if(i+j>haystack.length()-1 || i+j<haystack.length() && haystack[i+j]!=needle[j]){
                    isPresent = false;
                }
            }
            if(isPresent){
                return i;
            }
        }
        return -1;
        
    }
};