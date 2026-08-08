/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || !head->next)return head;
        
       
        // if(head->val == head->next->val){
        //      int headVal = head->val;
        //      while(head && head->val == headVal){
        //          ListNode* next  = head->next;
        //             head->next = NULL;
        //             delete head;
        //             head = next;

        //      }
        // }
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr){
            if(curr->next && curr->val == curr->next->val ){
                int val = curr->val;
                while( curr && curr->val == val){
                    ListNode* next  = curr->next;
                    curr->next = NULL;
                    delete curr;
                    if(prev== NULL){
                        head=next;
                        curr=next;
                    }
                    else{
                        prev->next= next;
                    curr= next;
                    }
                    
                }
                

                
                
            }
            else{
                prev= curr;
                curr= curr->next;
            }
        }
        return head;
        
    }
};