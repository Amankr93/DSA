class Solution {
public:
    int findPivot(vector<int>& nums){
        int n= nums.size();
        int s = 0, e=n-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(nums[mid]==nums[n-1]&&nums[mid]==nums[0]){
                s++;
                e--;
            }
            else if(nums[mid]>nums[n-1])s=mid+1;
            else e=mid;
            mid=s+(e-s)/2;
        } 
        return s;
    }
    bool search(vector<int>& nums, int target) {
        
        int s= 0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if (nums[mid] == target) return true;
            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s++;
                e--;
            }
            else if (nums[s] <= nums[mid]) {
                if (target >= nums[s] && target < nums[mid]) {
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
            else {
                if (target > nums[mid] && target <= nums[e]) {
                    s = mid + 1;
                } else {
                    e = mid - 1;
                }
            }
            mid=s+(e-s)/2;
        }
        return false;
    }
};