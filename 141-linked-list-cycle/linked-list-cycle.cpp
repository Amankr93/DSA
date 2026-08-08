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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return false;
        if(head->next==head)return true;
   
        ListNode * fast = head;
        ListNode * slow = head;
        while(slow && fast){
            slow= slow->next;
            fast = fast->next;
            if(fast)fast = fast->next;
            if(fast==slow)return true;
            
        }
        return false;
        
    }
};