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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode(-1);
        
        ListNode* head = res;
        int carry = 0;
        while(l1!=NULL && l2!=NULL){
            int value = l1->val + l2->val +carry;
            carry = value/10;
            value= value%10;
            
            ListNode* node = new ListNode();
            head->next = node;
            head = head->next;
            head->val = value;
            
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int value = l1->val + carry;
            carry = value/10;
            value= value%10;
            
            ListNode* node = new ListNode();
            head->next = node;
            head = head->next;

            head->val = value;
            
            l1=l1->next;
            
        }
        while(l2!=NULL){
            int value = l2->val + carry;
            carry = value/10;
            value= value%10;
            
            ListNode* node = new ListNode();
            head->next = node;
            head = head->next;

            head->val = value;
            l2=l2->next;
            
        }
        if(carry){
            ListNode* node = new ListNode();
            head->next = node;
            head = head->next;

            head->val = carry;

        }
        return res->next; 
        
    }
};