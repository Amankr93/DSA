class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        int diff = INT_MAX;
        for(int i=0;i<nums.size();i++){
            // if(j>0 && nums[i]==nums[i-1]){
            //     continue;
            // }
            int j= i+1;
            int k= nums.size()-1;
            
            while(j< k){
                int total = nums[i] + nums[j] + nums[k];

                if(total == target){
                    return total;
                }
                else if(total > target ){
                    k--;
                    if( (total - target )< diff){
                        diff = total - target;
                    ans = total;
                    }
                    
                }
                else if(total < target ){
                    j++;
                    if( (target- total)< diff){
                        diff = target- total;
                        ans = total;
                    }
                    

                }
               
            }

        }
        return ans;
        
    }
};