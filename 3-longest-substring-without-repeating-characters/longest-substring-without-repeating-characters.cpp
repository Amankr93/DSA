class Solution {
public:
int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        for (int i=0;i<s.length();i++){
            string newString ="";
            
            for(int j=i; j<s.length();j++){
                // cout<<s[j]<< " "<<newString<<endl;
                if(newString.find(s[j])!=std::string::npos){
                    int length = newString.length();
                    maxLength = max(maxLength, length);
                    // cout<<newString<<"at the end "<<length<< endl;
                    break;

                }
                newString.push_back(s[j]);
                int length = newString.length();
                    maxLength = max(maxLength, length);

            }
        }
        return maxLength;
        
    }
};