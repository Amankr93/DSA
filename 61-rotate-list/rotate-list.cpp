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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)return head;
        ListNode* temp = head;
        int n = 0;
        while(temp){
            n++;
            temp = temp->next;

        }
        k = k%n;
        if(k==0)return head;
        ListNode* next;
        temp= head;
        
        while(n-k){
            
            k++;
            if(n-k == 0){
                next = temp->next;
                temp->next =NULL;
                ListNode* curr = next;
                while(curr->next){
                    curr = curr->next;
                }
                curr->next = head;
                return next;
            }
            temp=temp->next;
        }
        return next;
    }
};