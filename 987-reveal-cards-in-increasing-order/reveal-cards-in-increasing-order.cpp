class Solution {
public:
void rotatev(vector<int>&arr){
    
    
    int n=arr.size();
    if(n==0||n==1)return;
    vector<int> temp(n);
    for(int i=n-1;i>=0;i--){
        temp[(i-1+n)%n]=arr[i];
    }
    arr=temp;
}
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> ans;
        reverse(deck.begin(),deck.end());
        for(int i=0;i<deck.size();i++){
            rotatev(ans);
            ans.push_back(deck[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};