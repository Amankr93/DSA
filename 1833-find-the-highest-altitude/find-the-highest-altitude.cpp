class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ha = 0;
        int pref = 0;
        for(auto ht:gain){
            pref += ht;
            ha = max(ha, pref);
        }
        return ha;
        
    }
};