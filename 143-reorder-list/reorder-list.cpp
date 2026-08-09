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
    ListNode* reverse (ListNode* curr, ListNode* &headNew ){
        if(curr->next == NULL) {
            headNew = curr;
            return curr;
        }
        ListNode* tail = reverse(curr->next, headNew);
        tail->next = curr;
        return curr;
    }
    void reorderList(ListNode* head) {
        if(head->next==NULL || head->next->next == NULL)return;
        ListNode* temp = head;
        int n=0;
        while(temp){
            n++;
            temp = temp->next;
        }
        int  i= (n+1)/2-1;
        temp = head;
        while(i){
            temp =temp->next;
            i--;
        }
        ListNode* head2 = NULL;
        ListNode* tail2 = reverse(temp->next, head2);
        temp->next = NULL;
        tail2->next = NULL;
        ListNode* temp2 = head2 ;
        ListNode* temp1 = head ;
        while(temp1 && temp2){
            ListNode* next1 = temp1->next;
            ListNode* next2= temp2->next;
            temp1->next = temp2;
            temp2->next = next1;
            temp1 = next1;
            temp2 = next2;
        }
    }
};