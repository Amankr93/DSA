class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prefixSum= nums[0];
        int minStartValue = nums[0];
        for(int i=1;i<nums.size();i++){
            prefixSum += nums[i];
            if(prefixSum<minStartValue){
                minStartValue = prefixSum;
            }
        }
        if(minStartValue>=0)return 1;
        else return minStartValue*(-1)+1;

        
    }
};