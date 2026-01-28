class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);

        }
        int top=0;int count=0;
        int lc=0;
        int lv=q.size();
        while(!q.empty()&&top<sandwiches.size()){
            lc++;
            if(q.front()==sandwiches[top]){
                q.pop();
                top++;
            }
            else {
                q.push(q.front());
                q.pop();
                count++;
                

            }
            if(lc==lv){
                if(count==lv)break;
                else count=0;
                lv=q.size();
                lc=0;
                
                
            }
        }
       return q.size(); 
    }
};