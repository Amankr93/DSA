class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int s = 0;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<=e){
            if(nums[mid]>mid)e=mid-1;
            else s=mid+1;
            mid = s+(e-s)/2;

        }
        return s;
        
    }
};