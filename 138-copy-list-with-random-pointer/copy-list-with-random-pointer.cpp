/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void cloning(Node* head){
        Node* temp = head;
        
        Node* next = NULL;
        
        while(temp){
            if(temp->random)
            temp->next->random = temp->random->next;
            temp = temp->next->next; 
        }
    }
    void revert(Node* head){
        Node* temp1 = head;
        Node* temp2 = head->next;
        Node*next1=NULL, *next2=NULL;
        while(temp1){
            next1 = temp2->next;
            next2 = next1? next1->next :NULL;
            temp1->next = next1;
            temp2->next = next2;
            temp1 = next1;
            temp2 = next2;
        }
    }
    void mapping(Node* head, Node* clonehead){
        Node* temp1 = head;
        Node* temp2 = clonehead;
        Node*next1=NULL, *next2=NULL;
        while(temp1 && temp2){
            next1 = temp1->next; 
            next2 = temp2->next; 
            temp1->next = temp2;
            temp2->next = next1;
            temp1 = next1;
            temp2 = next2;
        }
    }
    Node* copyRandomList(Node* head) {
        if(head == NULL)return head;
        Node* clonehead = NULL;
        Node* ctail = clonehead;
        Node* curr = head;
        while(curr){
            if(clonehead == NULL){
                clonehead = new Node(curr->val);
                ctail =  clonehead;
            }
            else {
                ctail->next = new Node(curr->val);
                ctail = ctail->next;
            }
            curr = curr->next;
        }
        mapping(head, clonehead);
        cloning(head);
        revert(head);
        return clonehead;
    }
};