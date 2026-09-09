class Solution {
public:
    string decodeString(string s) {
       
        int n = s.length();
        int i = 0;
        stack<char> st;
        while(i<n){
            if(s[i]!=']'){
                
                st.push(s[i]);
                
            }
            else {
                string temp = "";
                while(!st.empty() && st.top()!='['){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();
                int count  = 0;
                string num = "";
                while(!st.empty() && st.top()>='0' &&st.top()<='9'){
                    num+=st.top();
                    st.pop();
                }
                reverse(num.begin(), num.end());
                
                count = stoi(num);
                reverse(temp.begin(), temp.end());
                for(int j = 0;j<count;j++){

                    for(int i=0; i<temp.length();i++){
                        st.push(temp[i]);
                    }
                }
               
                
            }   
            i++;         
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};