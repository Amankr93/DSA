class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n= height.size();
        int s=0;
        int e=n-1;
        
        int maxWater = 0;
        while(s<e){
            int prod = height[s]<=height[e]?  height[s]*abs((e-s)) :height[e]*abs((e-s));
            if(prod> maxWater){
                maxWater =prod;
            }
            if(height[s]<=height[e])s++;
            else e--;
            
        }
        return maxWater;
        
    }
};