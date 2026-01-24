class MyQueue {
public:

void insertatBottom(stack<int> &popst,int x){
    if(popst.empty()){
        popst.push(x);
        return;
    }
    int elem=popst.top();
    popst.pop();
    insertatBottom(popst,x);
    popst.push(elem);

}stack<int> pushst;
        stack<int> popst;
    MyQueue() {

        

        
    }
    
    void push(int x) {
        
        pushst.push(x); 
        insertatBottom(popst,x);
        
    }
    
    int pop() {
        int elem=popst.top();
        popst.pop();
        return elem;
        
    }
    
    int peek() {
        return popst.top();
        
    }
    
    bool empty() {
        if(popst.empty())return true;
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */