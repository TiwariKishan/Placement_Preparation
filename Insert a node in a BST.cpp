Node* insert(Node* node, int data)
{
    // Your code here
    if(node==NULL)
    return newNode(data);
    if(node->data>data)
    node->left=insert(node->left,data);
    if(node->data<data)
    node->right=insert(node->right,data);
    return node;
}
