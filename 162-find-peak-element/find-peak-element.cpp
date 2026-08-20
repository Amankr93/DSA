class Solution {
public:
    int solve (int s, int e, vector<int> &nums){
        if(s>e)return -1;
        int mid = s+ (e-s)/2;
        if(mid==nums.size()-1 ){
            if(nums[mid]>nums[mid-1])return mid;
            // return -1;
        }
        else if(mid==0){
            if( nums[mid]>nums[mid+1]) return mid;
            // else return -1;
        }
        else if(nums[mid-1]<nums[mid]&& nums[mid]>nums[mid+1])return mid;
        int ans1 = solve(mid+1,e, nums);
        if(ans1!=-1)return ans1;
        int ans2 = solve(s, mid-1, nums);
        
        return ans2;
    }
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        return solve(0,nums.size()-1,nums);

        
    }
};