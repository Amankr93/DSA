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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next == NULL)return head;

        int n=2;
        ListNode* slow=head;
        ListNode* fast=head->next;
        stack<ListNode*> st;
        st.push(slow);
        while(fast->next){
            slow =  slow->next;
            st.push(slow);
            fast = fast->next;
            n++;
            if(fast->next){
                fast = fast->next;
                n++;
            }
        }
        if(n%2==1)st.pop();
        ListNode* newHead = slow->next;
        while(newHead){
            if(newHead->val != st.top()->val)return false;
            newHead = newHead->next;
            st.pop();
        }
        return true;


    }
};