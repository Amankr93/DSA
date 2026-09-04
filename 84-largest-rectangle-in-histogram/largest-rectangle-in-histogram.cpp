class Solution {
public:
    void nextsmaller(vector<int>& nextsm , vector<int>& heights){
        stack<int>s;
        int n= heights.size();
        s.push(n);
        for(int i=nextsm.size()-1;i>=0;i--){
            while(s.top()!=n && heights[i]<=heights[s.top()]){
                s.pop();
            }
            nextsm[i] = s.top();
            s.push(i);
        }
    }
    void prevsmaller(vector<int>& prevsm , vector<int>& heights){
        stack<int>s;
        s.push(-1);
        for(int i=0;i<heights.size();i++){
            while(s.top()!=-1 && heights[i]<=heights[s.top()]){
                s.pop();
            }
            prevsm[i] = s.top();
            s.push(i);
        }
    }
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nextsm(n);
        vector<int>prevsm(n);
        nextsmaller(nextsm, heights);
        prevsmaller(prevsm, heights);
        int ans = -1;
        for(int i =0;i<n;i++){
            int nxtsm = nextsm[i];
            int prvsm = prevsm[i];
            int area = (nxtsm - prvsm -1)*heights[i];
            ans = max(ans, area);

        }
        return ans;
        
    }
};