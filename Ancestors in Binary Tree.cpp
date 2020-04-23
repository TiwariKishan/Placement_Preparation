void pri(Node* root,int a[],int i,int y);
bool printAncestors(struct Node *root, int target)
{
     // Code here
     int a[100000],i=0;
     pri(root,a,i,target);
}
void pri(Node* root,int a[],int i,int y)
{   if(root==NULL)
     return ;
    
    if(root->data==y)
    {   for(int u=i-1;u>=0;u--)
        cout<<a[u]<<" ";
        //cout<<"\n";
        return;
    }
    a[i]=root->data;
    i++;
    if(root!=NULL&&root->left==NULL&&root->right==NULL)
    {   
        return;
    }
    //cout<<root->data<<" ";

    pri(root->left,a,i,y);
    pri(root->right,a,i,y);
    //i=0;
    //cout<<"\n";
    // Code here
}
