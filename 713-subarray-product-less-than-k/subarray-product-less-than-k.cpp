class Solution {
public:
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0)return 0;
        int n = nums.size();
        int count = 0;
        int i = 0;
        int prod = 1;
        for(int j =0; j<n;j++){
            prod *= nums[j];
            while(i<=j && prod>=k){
                prod = prod/nums[i];
                i++;
            }
            count+= j-i+1;
        }
        return count;
    }
};