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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root->left==NULL && root->right== NULL)return {{root->val}};
        queue<pair<TreeNode*, pair<int,int>>> q;
        q.push({root, {0,0}});
        map<int, map<int,vector<int>>> mp;
        while(!q.empty()){
            pair<TreeNode*, pair<int,int>>p = q.front();
            TreeNode* node= p.first;
            int hd = p.second.first;
            int lvl = p.second.second;
            q.pop();
            mp[hd][lvl].push_back(node->val);
            if(node->left)q.push({node->left, {hd-1, lvl+1 }});
            if(node->right)q.push({node->right,{hd+1, lvl+1}});

        }
        for(auto i:mp){
            vector<int> merged;
            for(auto j:i.second){
                vector<int>arr = j.second;
                sort(arr.begin(), arr.end());
                for(auto k: arr){
                    merged.push_back(k);

                }
            }
            
            ans.push_back(merged);
        }
        return ans;
    }
};