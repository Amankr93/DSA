class Solution {
public:
    bool isOperator(string token){
        if(token =="+" ||token =="*" ||token =="-" ||token =="/"){
            return true;
        }
        return false;
    }
    int solve(int x, int y, string op){
        if(op == "+")return x+y;
        if(op == "-") return x-y;
        if(op == "*") return x*y; 
         return x/y;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i= 0;i<tokens.size();i++){
            if(!isOperator(tokens[i])){
                s.push(stoi(tokens[i]));
                cout<<"inserted "<<s.top()<<endl;

            }
            else {
                int num1 = s.top();
                s.pop();
                int num2 = s.top();
                s.pop();
                int ans = solve(num2, num1, tokens[i]);
                s.push(ans);
            }
        }
        return s.top();
        
    }
};