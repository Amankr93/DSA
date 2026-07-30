class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val;
       for(int i=0;i<nums.size();i++){
       int diff = target - nums[i];
       if(val[nums[i]]!=NULL){
        return {i, val[nums[i]]-1};
        }
        val[diff] = i+1;
       }
        return {};
       }
       
    
};