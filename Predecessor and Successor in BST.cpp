void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
if(!root)
return;
if(root->key>key)
{
    suc=root;
    findPreSuc(root->left,pre,suc,key);
}
else if(root->key<key)
{
    pre=root;
    findPreSuc(root->right,pre,suc,key);
}
else
{
    if(root->left)
     {Node *temp=root->left;
      while(temp)
      {  pre=temp;
         temp=temp->right;
      }
        
     }
    if(root->right)
     {Node *temp=root->right;
        while(temp)
      {  suc=temp;
         temp=temp->left;
      } 
      
     }
     return;
}

}
