class Solution {
public:
    bool isPalindrome(int x) {
        if(x==0)return true;
        if(x<0)return false;
        vector<int> arr;
        while(x>0){
            int mod= x%10;
            x=x/10;
            arr.push_back(mod);

        }
        int i=0,j=arr.size()-1;
        while(i<j){
            if(arr[i]!=arr[j])return false;
            i++;
            j--;
        }
        return true;
        
    }
};