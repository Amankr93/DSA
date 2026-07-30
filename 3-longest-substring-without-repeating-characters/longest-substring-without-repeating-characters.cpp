class Solution {
public:
int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int i=0;
        string newString ="";
        while (i<s.length()){
            if(newString.find(s[i])!=string::npos){
                int length = newString.length();
                maxLength =max(maxLength, length);
                int index = newString.find(s[i]);
                
                newString =index+1<newString.length()? newString.substr(index+1): "";
                
                newString.push_back(s[i]);
                i++;
            }
            else{
                newString.push_back(s[i]);
                int length = newString.length();

                maxLength =max(maxLength, length);
                i++;

            }
            
            
        }
         
        return maxLength;
        
    }
};