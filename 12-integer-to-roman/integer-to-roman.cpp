class Solution {
public:
    int power(int k){
        if(k==0)return 1;
        if(k==1)return 10;
        if(k==2)return 100;
        if(k==3)return 1000;
        return 1;
    }
    string intToRoman(int num) {
        unordered_map<int, char> mp;
        mp[1]='I';
        mp[5]='V';
        mp[10]='X';
        mp[50]='L';
        mp[100]='C';
        mp[500]='D';
        mp[1000]='M';
        vector<int> v;
        while(num>0){
            v.push_back(num%10);
            num = num/10;
        };
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            int digit =  v[i];
            cout<<digit<<endl;
            if(digit == 4 || digit ==9){
                ans.push_back(mp[power(i)]);
                ans.push_back(mp[((digit+1)*power(i))]) ;
            }
            else{
                int val = (digit/5)*5*power(i);
                if(val){
                    ans.push_back(mp[val]);
                    
                }
                int count = digit%5;
                for(int j=0;j<count;j++){
                    ans.push_back(mp[power(i)]);
                }
            }

        }
        return ans;
        
    }
};