class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        if(x<arr[0]){
            vector<int> ans(arr.begin(), arr.begin()+k);
            return ans;
        }
        if(x>arr[n-1]){
            vector<int> ans(arr.end()-k, arr.end());
            return ans;
        }
        int index = 0;
        while(arr[index]<x){
            index++;
        }
        cout<<"indeax is"<<index<<endl;
        int i ;
        int j ;        
        int count = 0;
        vector<int> ans;
        if(arr[index]==x){
        ans.push_back(x);
        count++;
        i=index+1;
        j=index-1;
        }
        else{
            i=index;
            j=index-1;
        }
        while(i<n && j>=0 && count<k){
            if(abs(x-arr[j])<=abs(x-arr[i])){
                ans.push_back(arr[j]);
                j--;
                count++;
                // cout<<"count at pushing "<< arr[j]<<" is "<<count<<endl;
            }
            else {
                ans.push_back(arr[i]);
                i++;
                count++;
            }
        }
        while(count<k && j<0 && i<n){
            ans.push_back(arr[i]);
            i++;
            count++;
        }
        while(count<k && i==n && j>=0 ){
            ans.push_back(arr[j]);
            j--;
            count++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};