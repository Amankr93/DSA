class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();i++){
            q.push(tickets[i]);
        }
        int time=0;
        int index=k;
        int tc=0,tv=tickets[k];
        while(!q.empty()&&tc!=tv){

            time++;
            q.front()--;
            if(index==0){
                tc++;
                if(tc!=tv)index=q.size()-1;
                q.push(q.front());
                q.pop();
            }
            else{
                 if(q.front()==0){q.pop();
                 }
            else{
                q.push(q.front());
                q.pop();
            }
            index--;
            }
            
           
            
        }
        return time;
    }
};