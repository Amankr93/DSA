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
        map<ListNode *, bool>visited;;
        ListNode * curr = head;
        while(curr){
            if(visited[curr])return true;
            visited[curr] = true;
            curr= curr->next;
        }
        return false;
        
    }
};