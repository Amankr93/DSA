class Solution {
public:
    bool solve(int n,int i){
        if(pow(3,i)>n){
            return false;
        }
        if(pow(3,i)==n){
            return true;
        }
        else{
            return solve(n,i+1);
        }
    }
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n<=0){
            return false;
        }
        return solve(n,1);

        
    }
};