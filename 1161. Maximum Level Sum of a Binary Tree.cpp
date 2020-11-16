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
    int maxLevelSum(TreeNode* root) {
        queue< TreeNode* > q;
        q.push(root);
        int sum=INT_MIN,ans,level=0;
        while(!q.empty())
        {
            int s=q.size(),temp=0;
            while(s--)
            {
                TreeNode *node=q.front();
                q.pop();
                temp+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                
            }
            level++;
            if(sum<temp)
            {
                sum=temp;
                ans=level;
            }
        }
        return ans;
    }
};
