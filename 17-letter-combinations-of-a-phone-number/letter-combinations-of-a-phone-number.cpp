class Solution {
public:
    void  solve(string &temp, vector<string>&ans, string digits, int i , vector<string>&mapping){
        if(i==digits.length()){
            ans.push_back(temp);
            return ;
        }
        string str = mapping[digits[i]-'0'];
        for(int j = 0;j<str.length();j++){
            temp.push_back(str[j]);
            solve(temp, ans, digits, i+1, mapping);
            temp.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> mapping = {"0", "1", "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string temp;
        solve(temp, ans, digits, 0, mapping);
        return ans;
        
    }
};