class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> ans;
        int i= 0, j=0;
        while(i<n &&j<m){
            while(i+1<n && nums1[i]==nums1[i+1])i++;
            while(j+1<m && nums2[j]==nums2[j+1])j++;
            if(nums1[i]<nums2[j])i++;
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else j++;
        }
        return ans; 
        
    }
};