class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int s = 0;
         int e = n;
         int mid = s+(e-s)/2+1;
         while(s<e){
            if(citations[n-mid]>=mid){
                s = mid;
            }
            else e=mid-1;
            mid = s+(e-s)/2+1;
         }

            
        return s;
    }
};