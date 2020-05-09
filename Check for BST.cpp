bool bst(int mi,int ma,Node* root)
{
    if(!root)
    return 1;
    if(root->data>=mi&&root->data<=ma)
    {
        return bst(mi,(root->data)-1,root->left)&bst((root->data)+1,ma,root->right);
    }
    return 0;
}
bool isBST(Node* root) {
    // Your code here
    int mi=-100000000,ma=100000000;
    return bst(mi,ma,root);
}
