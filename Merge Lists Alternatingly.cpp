void mergeList(struct Node **p, struct Node **q)
{
     Node *head1=*p,*head2=*q;
     while(head1&&head2)
     {
         Node *temp1=head1->next,*temp2=head2->next;
         head1->next=head2;
         head2->next=temp1;
         head1=temp1;
         head2=temp2;
         
     }
    
     *q=head2;
}
