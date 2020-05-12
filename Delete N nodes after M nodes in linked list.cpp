void linkdelete(struct Node  *head, int M, int N)
{
    //Add code here   
    int flag=0,i=0;
    Node* temp1;
    while(head)
    {
        i++;
        if(i==M&&flag==0)
        {
           temp1=head;
           flag=1;
           i=0;
        }
        else if(i==N&&flag==1)
        {
            temp1->next=head->next;
            flag=0;
            i=0;
        }
        head=head->next;
    }
    if(i!=0&&flag==1&&N!=0)
    {
        temp1->next=NULL;
    }
}
