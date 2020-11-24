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
    unordered_map<int,vector<TreeNode*> > m;
    vector<TreeNode*> allPossibleFBT(int N) {
        if(N==1) return m[1]= {new TreeNode()};
        if(N%2==0) return {};
        if(m.find(N)!=m.end()) return m[N];
        
        vector<TreeNode*> ans;
        
        for(int x=0;x<N;x++)
        {
            int y=N-1-x;
            for(auto l: allPossibleFBT(x) )
                 for(auto r: allPossibleFBT(y) )
                 {
                     TreeNode* root=new TreeNode();
                     root->left=l;
                     root->right=r;
                     ans.push_back(root);
                 }
        }
        return m[N]=ans;
    }
};
