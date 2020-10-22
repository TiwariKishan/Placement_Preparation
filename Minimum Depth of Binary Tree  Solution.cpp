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
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int ans=1;
        while(!q.empty())
        { int y=q.size();
            while(!q.empty()&&y--)
            {TreeNode *v=q.front();
            q.pop();
            if(!v->left&&!v->right) return ans;
            if(v->left)  q.push(v->left);
            if(v->right) q.push(v->right);
            }
            ans++;
        }
        
        return -1;
    }
};
