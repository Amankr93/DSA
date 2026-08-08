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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next ==NULL)return head;
        ListNode* head1=NULL;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail2 = dummy;
        ListNode* tail1 = head1;
        ListNode* curr= head;
        while(curr){
            if(curr->val<x){
                tail2->next = curr;
                tail2 = tail2->next;
            }
            else {
                if(head1==NULL){
                    head1 = curr;
                    tail1 = curr;
                }
                else{
                    tail1->next = curr;
                    tail1 = tail1->next;
                }
            }
            curr= curr->next;

        }
        tail2->next = head1;
        if(tail1)tail1->next = NULL;
        return dummy->next;
    }
};