//If the particular value is not present then it will not give the NULL value though it will give the node which is present as a result
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
   int n1=p->val,n2=q->val;
   if(root==NULL)
   return NULL;
   if(root->val==n1||root->val==n2)
   return root;
   TreeNode* l=lowestCommonAncestor(root->left,p,q);
   TreeNode* r=lowestCommonAncestor(root->right,p,q);
   if(l&&r)
   return root;
   if(l)
   return lowestCommonAncestor(l,p,q);
 
   return  lowestCommonAncestor(r,p,q); }
};
/// This will give the NULL value if a particular node is not present for which we have to find its anchestor
Node* lcs1(Node* root ,int n1 ,int n2,int &v1,int &v2);
bool find(Node* root,int n);
bool find(Node* root,int n)
{
    if(root==NULL)
    return false;
    if(root->data==n||find(root->left,n)||find(root->right,n));
    return true;
    return false;
}
Node* lca(Node* root ,int n1 ,int n2 )
{  int v1=0,v2=0;
   Node* lo=lcs1( root ,n1 ,n2,v1,v2);
   if(v1&&v2||v1&&find(lo,n2)||v2&&find(lo,n1))
   return lo;
   return NULL;
   
}
Node* lcs1(Node* root ,int n1 ,int n2,int &v1,int &v2)
{
    if(root==NULL)
   return NULL;
   if(root->data==n1)
   {   v1=1;
       return root;
      
   }
   if(root->data==n2)
   {   v2=1;
       return root;
      
   }
   Node* l=lcs1(root->left,n1,n2,v1,v2);
   Node* r=lcs1(root->right,n1,n2,v1,v2);
   if(l&&r)
   return root;
   if(l)
   lcs1(l,n1,n2,v1,v2);
   if(r)
   lcs1(r,n1,n2,v1,v2);
   
}
