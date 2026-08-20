class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s= 0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int leftIndex = -1;
        int rightIndex = -1;
        while(s<=e){
            if(nums[mid]==target){
                leftIndex = mid;
                e=mid-1;
                
        
            }
            else if(nums[mid]>target)e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        s=0;
        e=nums.size()-1;
        mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                rightIndex = mid;
                s=mid+1;
            }
            else if(nums[mid]>target)e=mid-1;
            else s=mid+1;
            mid=s+(e-s)/2;
        }
        return { leftIndex,rightIndex};
    }
};