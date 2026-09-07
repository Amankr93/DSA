class Solution {
public:
    string makeGood(string s) {
        if(s.length()==0)return s;
        string ans;
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            char ch= s[i];
            if(!st.empty() && (((st.top()>='a'&&st.top()<='z')&& (ch== st.top()-'a'+'A')) || st.top()>='A'&&st.top()<='Z' && ch==st.top()-'A'+'a')){
                st.pop();

            }
            else {
                st.push(ch);
            }

        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
    }
};