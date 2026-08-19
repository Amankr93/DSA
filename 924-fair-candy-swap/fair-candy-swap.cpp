class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        map<int,bool>mp;
        int n1 = aliceSizes.size();
        int n2 = bobSizes.size();
        int sum1 = 0, sum2 = 0;
        for(int i =0 ;i<n1;i++){
            sum1+= aliceSizes[i];
        }
        for(int i =0 ;i<n2;i++){
            sum2+= bobSizes[i];
        }
        int total = sum1 + sum2;
        int half = total/2;
        if(sum1>=sum2){
            for(int i=0;i<n1;i++){
                mp[aliceSizes[i]]=true;
            }
            for(int i=0;i<n2;i++){
                int curr = sum2-bobSizes[i];
                if(mp.count(half-curr)){
                    return { half-curr, bobSizes[i]};
                }
            }
        }
        else {
             for(int i=0;i<n2;i++){
                mp[bobSizes[i]]=true;
            }
            for(int i=0;i<n1;i++){
                int curr = sum1-aliceSizes[i];
                if(mp.count(half-curr)){
                    return {aliceSizes[i], half-curr };
                }
            }

        }
        


        return {};
    }
};