int he(Node* node)
{
    if(!node)
    return 0;
    return 1+max(he(node->left),he(node->right));
}
int diameter(Node* node) {
    // Your code here
    if(!node)
    return 0;
    int lh=he(node->left),rh=he(node->right),slh=diameter(node->left),srh=diameter(node->right);
    return max(lh+rh+1,max(slh,srh));
}
