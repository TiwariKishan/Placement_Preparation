/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int> > ans;
        if(!root) return ans;
        queue<Node*> q;
        q.push(root);
        ans.push_back({root->val});
        while(!q.empty())
        {
            int s=q.size();
            vector<int> level;
            while(s--)
            {
                Node* curr=q.front();
                q.pop();
                for(int i=0;i<curr->children.size();i++)
                {q.push(curr->children[i]);
                 level.push_back(curr->children[i]->val);
                }
            }
            if(level.size()!=0)
            ans.push_back(level);
        }
        return ans;
    }
};
