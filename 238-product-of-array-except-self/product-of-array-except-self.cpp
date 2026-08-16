class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> suffSum(n);

        vector<int>ans;
        int prod =1;
        for(int i=n-1;i>=0;i--){
            prod*=nums[i];
            suffSum[i] = prod;
        }
        ans.push_back(suffSum[1]);
        prod=nums[0];
        for(int i=1;i<n-1;i++){
            ans.push_back(prod*suffSum[i+1]);
            prod*=nums[i];
        }
        ans.push_back(prod);
        return ans;
        
    }
};