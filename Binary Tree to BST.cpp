int countN(Node* root)
{
    if(root==NULL)
    return 0;
    return countN(root->left)+countN(root->right)+1;
}
void bt_to_inorder(int *p,Node *root,int *it)
{   
    if(root==NULL)
    return;
    bt_to_inorder(p,root->left,it);
    *(p+*it)=root->data;
    //cout<<(p+*it)<<" ";
    (*it)++;
    bt_to_inorder(p,root->right,it);
}
void ar_to_bst(int *p,Node *root,int *it)
{   
    if(!root)
    return;
    ar_to_bst(p,root->left,it);
    root->data=*(p+*it);
    (*it)++;
    ar_to_bst(p,root->right,it);
}
Node *binaryTreeToBST (Node *root)
{
    //Your code goes here
    int n=countN(root);
    int ar[n],i=0;
    bt_to_inorder(ar,root,&i);
    
    sort(ar,ar+n);
    /*for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";*/
    i=0;
    ar_to_bst(ar,root,&i);
    //delete [] ar;
    return root;
}
