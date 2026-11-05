/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int findPos(vector<int> &in, int elem , int n){
    for(int i=0;i<n;i++){
        if(in[i]==elem)return i;
    }
    return -1;
}
    TreeNode* solve(vector<int>& in, vector<int>& post, int s, int e, int &i, int n){
        if(i<0 || s>e)return NULL;
        int pos = findPos(in, post[i], n);
        TreeNode* root = new TreeNode(post[i--]);
        
        root->right = solve(in, post, pos+1,e, i, n);
        root->left = solve(in, post, s, pos-1, i, n);
        return root;

    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int s=0, e = inorder.size()-1, i=postorder.size()-1;
        return solve(inorder, postorder, s, e, i, inorder.size());
        
    }
};