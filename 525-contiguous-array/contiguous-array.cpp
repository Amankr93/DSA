class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int>mp;
        int excessOne = 0;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)excessOne--;
            else excessOne++;
            if(excessOne==0)ans = max(ans, i+1);
            else if(mp.count(excessOne)){
                ans = max(ans, i-mp[excessOne]);
            }
            else mp[excessOne]=i;
        } 
        return ans;

        
    }
};