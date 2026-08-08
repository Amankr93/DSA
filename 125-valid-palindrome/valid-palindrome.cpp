class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int e = s.length()-1;
        while(st<e){
            if ((s[st]<'0'|| s[st]>'9') &&( s[st]<'A' || (s[st]>'Z'&&s[st]<'a') || s[st]>'z') ){
                st++;
            }
            else if((s[e]<'0'|| s[e]>'9') &&(s[e]<'A' || (s[e]>'Z'&&s[e]<'a') || s[e]>'z')){
                e--;
            }
            else {
                char ch1= s[st]>='A' && s[st]<='Z' ? s[st]-'A'+'a':s[st];
                char ch2= s[e]>='A'&& s[e]<='Z'? s[e]-'A'+'a' : s[e];
                if(ch1!=ch2){
                    cout<< "ch1 and ch2 is "<< ch1<< " "<<ch2<<endl;
                    return false;}
                st++;
                e--;
            }
        }
        // if(st<)
        return true;
        
    }
};