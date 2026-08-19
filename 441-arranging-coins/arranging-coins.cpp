class Solution {
public:
    int arrangeCoins(int n) {
        int s=0;
        int e= n;
        long long  mid = s+(e-s)/2; 
        while(s<=e){
            if(mid*(mid+1)/2==n)return mid;
            else if(mid*(mid+1)/2< n)s=mid+1;
            else e=mid-1;
            mid = s+(e-s)/2; 

        }
        return e;
        
    }
};