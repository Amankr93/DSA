class Solution {
public:
 void nextsmaller(vector<int> &next,vector<int> prices, int n ){
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        while(!s.empty() && s.top()>prices[i] ){
            s.pop();
        }
        next[i] = s.top();
        s.push(prices[i]);
    }
 }
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> nextsm(n);
        nextsmaller(nextsm, prices,n);
        vector<int> ans;
        for(int i = 0;i<n;i++){
            if(nextsm[i]!=-1){
                ans.push_back(prices[i]-nextsm[i]);
            }
            else ans.push_back(prices[i]);
        }
        return ans;
        
    }
};