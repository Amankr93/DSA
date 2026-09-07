class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<int>s;
        for(int i=0;i<logs.size();i++){
            string temp = logs[i];
            int j=0;
            while(j<temp.length()){
                string str = "";
                while(j<temp.length() && temp[j]!='/'){
                    str.push_back(temp[j]);
                    j++;
                }
                j++;
                if(str==".."){
                    if(!s.empty())s.pop();
                }
                else if(str == ".") continue;
                else s.push(1);
                
            }
        }
        int ans =0;
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
        
    }
};