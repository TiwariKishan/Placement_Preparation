//Time complexity O(N^2)
int sum(Node* root);
bool isSumTree(Node* root)
{
     if(root==NULL||(root->left==NULL&&root->right==NULL))
     return 1;
     // Your code here
     if(sum(root->left)+sum(root->right)==root->data&&isSumTree(root->left)&&isSumTree(root->right))
      return 1;
    return 0;

}
int sum(Node* root)
{   if(root==NULL)
     return 0;
    return sum(root->left)+sum(root->right)+root->data;
}
//
//Time complexity O(N)
bool isleaf(Node* root);
bool isSumTree(Node* root)
{
     if(root==NULL||isleaf(root))
     return 1;
     if(isSumTree(root->left)&&isSumTree(root->right))
     {
         int l,r;
         if(root->left==NULL)
         l=0;
         else if(isleaf(root->left))
          l=root->left->data;
         else
          l=2*(root->left->data);
         if(root->right==NULL)
          r=0;
         else if(isleaf(root->right))
          r=root->right->data;
         else
          r=2*(root->right->data);
         return (root->data==l+r);
     }
    return 0;
}
bool isleaf(Node* root)
{
    if(root==NULL||root->left!=NULL||root->right!=NULL)
    return 0;
    return 1;

}
