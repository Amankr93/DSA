class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> nums;
        int j= 0;
        int n = matrix[0].size();
        for(int i= 0;i<n; i=j/n ){
            nums.push_back(matrix[i][j%n]);
            j++;
        }
        sort(nums.begin(), nums.end());
        // cout<<nums.size();
        return nums[k-1];
        
    }
};