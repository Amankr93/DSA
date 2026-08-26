class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        // vector<vector<int>> cp(intervals);
        vector<int> ans(intervals.size());
        int n = intervals.size();
        // sort(cp.begin(), cp.end());
        
        unordered_map<int,int> mp;
        
        for(int i = 0;i<n;i++){
            mp[intervals[i][0]]=i;
        }
        sort(intervals.begin(), intervals.end());
        for(int i=0;i<n;i++){
            int end = intervals[i][1];
            int s = 0;
            int e= n-1;
            int mid = s+(e-s)/2;
            int ind = -1;
            while(s<=e){
                if(intervals[mid][0]>=end){
                    ind = mid;
                    e=mid-1;
                }
                else s=mid+1;
                mid = s+(e-s)/2;
            }
            if(ind!=-1)ans[mp[intervals[i][0]]] = mp[intervals[ind][0]];
            else ans[mp[intervals[i][0]]] = -1;
        }
        return ans;
        
    }
};