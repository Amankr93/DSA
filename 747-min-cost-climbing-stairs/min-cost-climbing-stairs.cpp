class Solution {
public:
int solve(vector<int>&cost,vector<int>&dp,int i){
    if(i==1||i==0)return cost[i];
    if(dp[i]!=-1)return dp[i];
    dp[i]=min(solve(cost,dp,i-1),solve(cost,dp,i-2))+cost[i];
    return dp[i];
}
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        dp[0]=cost[0];
        dp[1]=cost[1];
        return min(solve(cost,dp,cost.size()-1),solve(cost,dp,cost.size()-2));
        
    }
};