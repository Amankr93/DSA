 bool comparator(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        else return a.first<b.first;
    }
class Solution {
   
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> rowSum;
        int i=0;
        for(auto item: mat){
            int total = 0;
            for(auto i:item){
                total+=i;
                
            }
            rowSum.push_back({total,i});
            i++;
        }
        sort(rowSum.begin(), rowSum.end(), comparator);
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(rowSum[i].second);
        }
        return ans;
    }
};