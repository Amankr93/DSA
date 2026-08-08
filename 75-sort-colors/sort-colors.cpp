class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s=0;
        int e = nums.size()-1;
        while(s<=e){
          
                while( s<=e && nums[s]==0)s++;
                while(s<=e && (nums[e]== 1 || nums[e] == 2)) e--;
                if(s<e ){
                    swap(nums[s], nums[e]);
                    s++;
                    e--;
                }
    }
    e= nums.size()-1;
     while(s<e){
          
                while( s<e && nums[s]==1)s++;
                while(s<e && (nums[e] == 2)) e--;
                if(s<e ){
                    swap(nums[s], nums[e]);
                    s++;
                    e--;
                }
    }
    }
};