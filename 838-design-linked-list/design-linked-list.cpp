class node {
    public:
     int data;
     node* next;
     node(int data){
        this->data = data;
        this->next = NULL;
     }
};
class MyLinkedList {
public:
   
    node*head;
    node*tail;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
    }
    
    int get(int index) {
        if(head == NULL)return -1;
        node *curr = head;
        while(index>0 && curr){
            cout<<curr->data<<" ";
            curr = curr->next;
            index--;
        }
        if(curr){
            cout<<curr->data<<" "<<endl;
            return curr->data;
            
            }
            cout<<endl;
        return -1;
    }
    
    void addAtHead(int val) {
        if(head ==NULL){
            head = new node(val);
            tail = head;
            return ;
        }
        node* temp = head;
        node*curr = new node(val);
        curr->next = head;
        head =curr;
    }
    
    void addAtTail(int val) {
        if(head ==NULL){
            head = new node(val);
            tail = head;
            return ;
        }
        tail->next = new node(val);
        tail = tail->next;
    }
    
    void addAtIndex(int index, int val) {
        if(head == NULL){
            if(index>0)return;
            head = new node(val);
            tail = head;
            return;
        }
        if(index==0){
            addAtHead(val);
            return ;
        }
        node *curr = head;
        while(index>1&&curr){
            curr=curr->next;
            index--;
        }
        if(!curr )return;
        if(curr==tail ){
            addAtTail(val);
            return ;
        
        }
           
        else if(curr && index==1){
            node *nodetoInsert = new node(val);
            node*temp = curr->next;
            nodetoInsert->next = temp;
            curr->next = nodetoInsert;
        }

        
    }
    
    void deleteAtIndex(int index) {
        if(head==NULL)return;
        node*curr=head;
        if(index==0){
            node*temp=head->next;
            delete head;
            head = temp;
            if(head==NULL)
            tail  = head;
            return;
        }
        while(index>1 && curr){
            curr=curr->next;
            index--;
        }
        if(curr->next==NULL)return;
        if(tail==curr->next){
            
            delete curr->next;
            curr->next = NULL;
            tail = curr;
            return;
        }
        node* nxt = curr->next->next;
        curr->next->next = NULL;
        delete curr->next;
        curr->next = nxt;


    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */