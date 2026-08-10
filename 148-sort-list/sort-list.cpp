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
    ListNode* mergeSorted(ListNode* head1, ListNode* head2){
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        while(head1 && head2){
            if(head1->val < head2->val){
                tail->next = head1;
                head1 = head1->next;
            }
            else{
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
        tail->next = head1? head1 : head2;
        ListNode* head = dummy->next;
        dummy->next= NULL;
        delete dummy;
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if(head ==NULL || head->next ==NULL)return head;
        ListNode* slow= head;
        ListNode* fast= head;
        ListNode* temp= NULL;
        while(fast && fast->next){
            temp = slow;
            slow= slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        ListNode* list1 = sortList(head);
        ListNode* list2 = sortList(slow);
        return mergeSorted(list1, list2);
    }
    
};