class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=-1;
        while(i<nums.size()){
            if(j>=1 && nums[i] == nums[j] &&nums[i] == nums[j-1]){
                i++;
            }
            else{
                j++;
                nums[j] = nums[i];
                i++;
            }
        }
        return j+1;
        
    }
};