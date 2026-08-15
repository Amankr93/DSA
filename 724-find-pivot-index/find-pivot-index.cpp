class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(auto num:nums){
            total+= num;
        }
        int prevSum = 0;
        for(int i = 0;i<nums.size();i++){
            int nextSum = total - prevSum - nums[i];
            if(prevSum == nextSum)return i;
            prevSum += nums[i];
        }
        return -1;
    }
};