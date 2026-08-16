class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        int maxValue =0;
        int ans = logs[0][0];

        for(int i = 0;i<logs.size();i++){
            int count =0;
            for(int j=0;j<logs.size();j++){
                if(logs[j][0]<=logs[i][0]&&logs[i][0]<logs[j][1]){
                    count++;
                }
            }
            if(count>maxValue){
                ans = logs[i][0];
                maxValue = count;
                }
                else if(count == maxValue && logs[i][0]<ans){
                    ans = logs[i][0];
                }
        }
        return ans;
    }
};