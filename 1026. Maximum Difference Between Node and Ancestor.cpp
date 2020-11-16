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
    void dfs(TreeNode* root, int &ans,multiset<int> &s)
    {
        if(root->left)
        {
            s.insert(root->left->val);
            ans=max(ans,abs(*s.begin()-*(--s.end())));
            dfs(root->left,ans,s);
            s.erase(s.find(root->left->val));
        }
        if(root->right)
        {   
            s.insert(root->right->val);
            ans=max(ans,abs(*s.begin()-*(--s.end())));
            dfs(root->right,ans,s);
            s.erase(s.find(root->right->val));
        }
    }
    int maxAncestorDiff(TreeNode* root) {
        int ans=0;
        multiset<int> s;
        s.insert(root->val);
        dfs(root,ans,s);
        return ans;
    }
};
