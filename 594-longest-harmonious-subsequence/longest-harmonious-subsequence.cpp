class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j=0;
        int lhs = 0;
        for(int i=0;i<nums.size();i++){
            while((nums[i]-nums[j])>1){
                j++;

            }
            if((nums[i]-nums[j])==1)lhs = max(lhs, i-j+1);
        }
        return lhs;
    }
};