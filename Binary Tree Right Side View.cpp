class Solution {
public:
    void solve(TreeNode* root,vector<int> &ans, int height)
    {
        if(!root) return;
        if(height==ans.size()) ans.push_back(root->val);
        solve(root->right,ans,height+1);
        solve(root->left,ans,height+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        solve(root,ans,0);
        return ans;
    }
};
