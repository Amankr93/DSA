class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0)return true;
        if(x<0)return false;
        long long int reverse =0;
        int val=x;
        
        while(x>0){
            int rem = x%10;
            reverse= reverse*10+rem;
            x=x/10;
        }
        if(val==reverse) return true;
        return false;
    }

};