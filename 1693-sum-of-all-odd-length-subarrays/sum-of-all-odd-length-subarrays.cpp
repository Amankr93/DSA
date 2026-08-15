class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        vector<int> pref;
        pref.push_back(0);
        for(auto num: arr){
            pref.push_back(pref.back()+num);
        }
        int sum = 0;
        int i = 1;
        while(i<=arr.size()){
           for(int j=i;j<pref.size();j++){
            sum+= pref[j]-pref[j-i];
        } 
        i+=2;
        }
        
        return sum;
    }
};