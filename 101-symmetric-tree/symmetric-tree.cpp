/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool solve(TreeNode* root1, TreeNode* root2, bool& ans) {
        if (root1 == NULL && root2 == NULL)
            return true;
        if(root1==NULL&&root2!=NULL)return false;
        if(root2==NULL&&root1!=NULL)return false;
        bool left = solve(root1->left, root2->right, ans);
        bool right = solve(root1->right, root2->left, ans);
        // TreeNode* rootleft 1 = root1->left;
        // TreeNode* rootleft2 = root2->left;
        // TreeNode* rootright1 = root1->right;
        // TreeNode* rootright2 = root2->right;
        bool condn = root1->val==root2->val;
        if(left&&right&&condn)return true;
        return false;
    }
    bool isSymmetric(TreeNode* root) {bool ans=true; return solve(root->left, root->right, ans); }
};