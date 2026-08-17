class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        vector<int> pref;
        pref.push_back(0);
        for(auto num:nums){
            pref.push_back(pref.back()+num);
        }
       int prefixMod = 0;
       unordered_map<int,int> mp;
       mp[prefixMod] = -1;
       for(int i=0;i<nums.size();i++){
        prefixMod = (prefixMod + nums[i])%k;
        if(mp.count(prefixMod)){
            if( (i-mp[prefixMod]+1)>2)return true;
            // else if( mp[prefixMod]!=-1 && (i-mp[prefixMod]+1)>=2)return true;
        }
        else mp[prefixMod] = i;
       }
         
        return false;
        
    }
};