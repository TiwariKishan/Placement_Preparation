int maxNodeLevel(Node *root)
{
 // Add your code here
 if(!root)
 return -1;
 queue<Node*> q;
 q.push(root);
 int h=0,m=1,l=0;
 while(1)
 {   
    int y=q.size();
    if(y==0)
    break;
    if(y>m)
    {
        m=y;
        h=l;
    }
    while(y--)
    {
      Node* u=q.front();
      q.pop();
      if(u->left)q.push(u->left);
      if(u->right)q.push(u->right);
    }
    l++;
 }
 return h;
}
