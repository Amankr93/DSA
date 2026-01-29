class Solution {
public:

    int longestSubarray(vector<int>& nums, int limit) {
        deque<int>maxi;
        deque<int>mini;
         int ans=0;
         int left=0;
         int i=0;
         for(i=0;i<nums.size();i++){
            while(!maxi.empty()&&nums[maxi.back()]<=nums[i])maxi.pop_back();
            while(!mini.empty()&&nums[mini.back()]>=nums[i])mini.pop_back();
            maxi.push_back(i);
            mini.push_back(i);
            while(nums[maxi.front()]-nums[mini.front()]>limit){
                if(maxi.front()==left)maxi.pop_front();
                if(mini.front()==left)mini.pop_front();
                left++;
            }
            ans=max(ans,i-left+1);
        

    }
    return ans;
    
         }

};