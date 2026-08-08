/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
        if(head->next==head)return head;
   
        ListNode * fast = head;
        ListNode * slow = head;
        while(slow && fast){
            slow= slow->next;
            fast = fast->next;
            if(fast)fast = fast->next;
            if(fast==slow){
                fast = head;
                while(fast){
                    if(fast==slow)return fast;
                    fast= fast->next;
                    slow = slow->next;
                }
            }
            
        }
        return NULL;
        
    }
};