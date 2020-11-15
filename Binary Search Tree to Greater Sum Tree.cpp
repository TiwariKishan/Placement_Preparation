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
    void sbs(TreeNode* root,int &sum)
    {
        if(!root) return;
        sbs(root->right,sum);
        sum+=root->val;
        root->val=sum;
        sbs(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if(!root) return root;
        int sum=0;
        sbs(root,sum);
        return root;
    }
};
