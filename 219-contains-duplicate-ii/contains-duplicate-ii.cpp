class Solution {
public:
bool solve(vector<int>& nums, int i ,int k){
    if(i==nums.size())return false;
        bool next = solve(nums, i+1, k);
        int j = i+k<nums.size() ? i+k : nums.size()-1;
        bool ans = false;
        while(i<j){
             if(nums[i]==nums[j])ans = true;
             j--;

        }
        return next || ans;

}
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0;i<nums.size(); i++){
            if(mp.find(nums[i])== mp.end()){
                mp[nums[i]] = i;

            }
            else {
                int j = mp[nums[i]];
                int ans = abs(i-j);
                if(ans<=k && i!=j)return true;
                mp[nums[i]] = i;

            }
        }
        return false;
        
    }
};