void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *temp=new QueueNode(x);
        if(rear==NULL)
        {
            rear=temp;
            front=temp;
            return;
        }
        rear->next=temp;
        rear=temp;
}

/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
        // Your Code  
        if(!front)
        return -1;
        int y= front->data;
        front=front->next;
        if(!front)
        rear=NULL;
        return y;
        
}
