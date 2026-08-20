class Solution {
public:
    int findPivot(vector<int>& nums){
        int s = 0, e=nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<e){
            if(nums[mid]>nums[nums.size()-1])s=mid+1;
            else e=mid;
            mid=s+(e-s)/2;
        } 
        return s;
    }
    int search(vector<int>& nums, int target) {
        int pivot = findPivot(nums);
        cout<<pivot<<endl;
        int s= target>nums[nums.size()-1]?0:pivot ;
        int e=target>nums[nums.size()-1]?pivot-1:nums.size()-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target)return mid;
            else if(nums[mid]>target){
                e=mid-1;
            }
            else s = mid+1;
            mid=s+(e-s)/2;
        }
        return -1;
    }
};