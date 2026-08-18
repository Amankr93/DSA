class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        unordered_map<int, int>mp;
        mp[0]=1;
        int count = 0;

       for(int i=0;i<nums.size();i++){
        sum+= nums[i];
        
        if(mp.count(sum-k)){
            // count++;
            count+=mp[sum-k];
            // mp[sum-k]++;
        }
        mp[sum]++;
        // if(!mp.count(sum)) {
        //     mp[sum]=0;;
        // }
        
       }
        
        
        return count;
        
    }
};