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
        ListNode* node1=head1;
        ListNode* node2=head2;
        ListNode* tail = dummy;
        while(node1 && node2){
            if(node1->val < node2->val){
                tail->next = node1;
                node1 = node1->next;
                tail = tail->next;
            }
            else{
                tail->next = node2;
                node2 = node2->next;
                tail = tail->next;
            }
        }
        while(node1){
                tail->next = node1;
                node1 = node1->next;
                tail = tail->next;
        }
        while(node2){
             tail->next = node2;
                node2 = node2->next;
                tail = tail->next;
        }
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