class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i] == nums[i-1] ){
                cout<<"nums[i] is"<< nums[i] << " nums[i-1] is "<<nums[i-1]<<" i is "<<i<<endl;
                continue;
                
            }
            for(int j=i+1;j<nums.size();j++){
                cout<<"entered at i= "<<i<< endl;
                if(j-i>1 && nums[j] == nums[j-1] )continue;
                int k=j+1;
                int l= nums.size()-1;
                while(k<l){
                   long long int total = (long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    if(target == total){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        k++;
                        while(k<l && nums[k]==nums[k-1]){
                            k++;
                        }
                    }
                    else if(total > target){
                        l--;
                    }
                    else if(total< target ){
                        k++;
                    }

                }
            }
        }
        return ans;

    }
};