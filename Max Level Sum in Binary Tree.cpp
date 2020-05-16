int maxLevelSum(Node* root) {
    // Your code here
    if(!root)
    return 0;
    int m=root->data;
    queue<Node *> q;
    q.push(root);
    while(1)
    {
        int y=q.size();
        if(y==0)
        break;
        int l=0;
        while(y--)
        {   Node *u=q.front();
            q.pop();
            l+=u->data;
            if(u->left)q.push(u->left);
            if(u->right)q.push(u->right);
        }
        m=max(l,m);
    }
    return m;
}
