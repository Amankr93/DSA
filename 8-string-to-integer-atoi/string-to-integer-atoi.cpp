class Solution {
public:
     int myAtoi(string s) {
        int  i =0;
        while(s[i]==' '){
            i++;
        }
        int isNeg = -1;
        if(s[i] == '-'){
            isNeg = 1;
            i++;
        }
        else if(s[i] == '+'){
            isNeg = -1;
            i++;
        }

        int k=0;
        int sum = 0;
        for(int j=i;j<s.length()&&s[j]>='0' && s[j]<='9';j++){
            int digit = s[j] - '0';
            if(isNeg == -1 && sum>(INT_MAX-digit)/(10))return INT_MAX;
            else if(isNeg ==1 && sum<(INT_MIN+digit)/(10)){
                return INT_MIN;
            }
            
            sum = sum*10 +  (-1)*(digit *isNeg) ;
            k++;
        }
        return sum;
    }
};