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
ListNode* solve(ListNode* head1, ListNode* head2, int diff){
      ListNode* curr2 = head2;
      while(diff>0){
          curr2 = curr2->next;
          diff--;
      }
      ListNode* curr1= head1;
      while(curr1 && curr2){
          if(curr1==curr2)return curr1;
          curr1 = curr1->next;
          curr2  = curr2->next;
      }
      return NULL;
}
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       int count  = 0;
        int count2 = 0;
        ListNode* curr1 = headA;
        ListNode* curr2 = headB;
        while(curr1 || curr2){
            if(curr1){
                count++;
                curr1 = curr1->next;
            }
            if(curr2){
                count2++;
                curr2 = curr2->next;
            }
        }
        // return headA;
        if(count<=count2){
            return solve(headA, headB, count2-count);
        }
        return solve(headB, headA, count-count2);
    }
};