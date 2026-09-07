class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int oc=-1;
        queue<char>q;
        int i=0;
        while(i<s.length()){
            if(s[i]=='('){
                q.push(s[i]);
                oc++;
            }
            else if(s[i]==')'){
                if(oc==0){
                    q.pop();
                    while(!q.empty()){
                        ans.push_back(q.front());
                        q.pop();
                    }
                    oc=-1;
                }
                else {
                    q.push(s[i]);
                     oc--;

                }
            }
            i++;


        }
        return ans;
        
    }
};