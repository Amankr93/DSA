class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int sum = 0;
        int j = 0;
        int ans = INT_MAX;
        while(j<nums.size()){
           
            if((sum + nums[j])>=target){
                // sum+= nums[j];
                ans = min(ans, j-i+1);
                if(i<j){
                    sum -= nums[i];
                    i++; 
                }
                else j++;
            }
            else{
                sum+= nums[j];
                j++;
            }

        }
        return ans<INT_MAX? ans : 0;
        
    }
};