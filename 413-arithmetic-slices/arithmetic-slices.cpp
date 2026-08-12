class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        unordered_map<int, int>  mp;
        for(int i=1;i< nums.size();i++){
            mp[i] = nums[i]-nums[i-1];
        }
        int count = 0;
        for(int i=0;i<nums.size();i++){
            for(int j = i+2; j<nums.size() ;j++){
                if(mp[j]==mp[j-1]&& j-i+1>=3)count++;
                else break;
            }
        }
        return count;
        
    }
};