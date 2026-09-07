class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        int i=1;
        string ans = "";
        while(i<path.length()){
            string str="";
            while(i<path.length() && path[i]!='/'){
                str.push_back(path[i]);
                i++;
            }
            i++;
            if(str == ".." ){
                if(!s.empty())s.pop();
            }
            else if(str == "." || str.length()==0) continue;
           
            else { reverse(str.begin(), str.end()); s.push(str);}      
        }
        while(!s.empty()){
            if(ans=="")
            ans +=s.top();
            else {
                ans.push_back('/');
                ans+=s.top();
            }
            s.pop();

        }
        ans.push_back('/');
        reverse(ans.begin(), ans.end());
        return ans;
    }
};