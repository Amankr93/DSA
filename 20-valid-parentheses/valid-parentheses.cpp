class Solution {
public:
bool check(char ch, stack<int>s){
    if(s.empty())return false;
    char top = s.top();
    if(ch==')'){
        return top=='(';
    }
    if(ch=='}'){
        return top=='{';
    }
    if(ch==']')
        return top=='[';
    return false;
}
    bool isValid(string s) {
        stack<int> st;
        for(int i =0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else {
                bool ans = check(s[i], st);
                if(ans==false)return ans;
                else{
                    if(!st.empty())
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};