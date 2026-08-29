class Solution {
public:
void solve(vector<int>&temp, vector<vector<int>>&ans, int i, vector<int> &nums){
    if(i==nums.size()){
        ans.push_back(temp);
        return ;
    }
    solve(temp,ans,i+1,nums);
    temp.push_back(nums[i]);
    solve(temp,ans,i+1,nums);
    temp.pop_back();

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(temp,ans,0, nums);
        return ans;
        
    }
};