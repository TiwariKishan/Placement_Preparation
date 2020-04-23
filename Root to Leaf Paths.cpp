 void pri(Node* root,int a[],int i);
 void printPaths(Node* root)
 {int a[100000],i=0;
     pri(root,a,i);
     cout<<"\n";
 }
void pri(Node* root,int a[],int i)
{   if(root==NULL)
     return ;
    a[i]=root->data;
    i++;
    if(root!=NULL&&root->left==NULL&&root->right==NULL)
    {   for(int j=0;j<i;j++)
        cout<<a[j]<<" ";
        cout<<"#";
        return;
    }
    //cout<<root->data<<" ";
    
    pri(root->left,a,i);
    pri(root->right,a,i);
    //i=0;
    //cout<<"\n";
    // Code here
}
