class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        int ans=1;
        while(1ll*ans*2<=n){
            if(ans*2==n){
                return true;
            }
            else{
                ans*=2;
            }
        }
        return false;
        
    }
};