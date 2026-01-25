class MyStack {
public:
queue<int> * q1=new queue<int>;
deque<int> * q2=new deque<int>;
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q2->empty()){
            q1->push(q2->back());
            q2->pop_back();
        }
        q1->push(x);
        while(!q1->empty()){
            q2->push_front(q1->front());
            q1->pop();
        }
        
    }
    
    int pop() {
        if(q2->empty())return -1;
        int val = q2->front();
        q2->pop_front();
        return val;
        
    }
    
    int top() {
        if(q2->empty())return -1;
         return q2->front();
        
    }
    
    bool empty() {
        return q2->empty();
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */