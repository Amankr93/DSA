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
ListNode* solve(ListNode* prev, ListNode* curr , int &count, int n){
    if(curr == NULL){
        return NULL;
    }
    solve(curr , curr->next, count, n);
    count ++;
    if(count == n && prev !=NULL){
        ListNode* next = curr->next;
        prev->next = next;
        delete curr;
        curr = NULL; 
        return next;

    }
    else if(count == n && prev ==NULL){
        prev = curr->next;
        delete curr;
        curr=NULL;
        return prev;
    }
    return curr;

}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL && n==1){
            delete head;
            head =NULL;
            return head;
        }
        int count = 0;
        ListNode*curr = head;
        ListNode* prev = NULL;
        return solve(prev, curr, count, n);
        
    }
};