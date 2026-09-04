class CustomStack {
public:
        int size;
        int *arr;
        int top;
    CustomStack(int maxSize) {
        size = maxSize;
        arr= new int[size];
        top = -1;
    }
    
    void push(int x) {
        if(size-top>1){
            top++;
            arr[top]=x;
        }
        
    }
    
    int pop() {
        if(top>=0){
            int tp = arr[top];
            top--;
            return tp;
        }
        return -1;
        
    }
    
    void increment(int k, int val) {
        int i=0, count= 0;
        while(i<k && i<=top){
            arr[i]+=val;
            i++;
        }
        
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */