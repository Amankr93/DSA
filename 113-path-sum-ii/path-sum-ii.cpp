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
void solve(TreeNode* root, int targetSum,int sum,vector<int> path,vector<vector<int>> &ans){
    if(root==NULL)return ;
    sum+=root->val;
    path.push_back(root->val);

    if(sum==targetSum&&root->left==NULL&&root->right==NULL){
        ans.push_back(path);
    }
    solve(root->left,targetSum,sum,path,ans);
    solve(root->right,targetSum,sum,path,ans);
    
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        vector<vector<int>> ans;
        solve(root,targetSum,0,path,ans);
        return ans;
        
    }
};