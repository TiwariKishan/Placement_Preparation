void jk(Node* node,vector<int> &v);
void printSibling(Node* node)
{
   // Your code here
   vector<int> v;
   jk( node,v);
   if(v.size()==0)
   cout<<"-1";
   else
   {   sort(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       cout<<v[i]<<" ";
   }
}
void jk(Node* node,vector<int> &v)
{  if(node==NULL)
   {  
       return; 
   }
   if(node->left&&!node->right)
     v.push_back(node->left->data);
   if(!node->left&&node->right)
     v.push_back(node->right->data);
     jk(node->left,v);
     jk(node->right,v);
}
