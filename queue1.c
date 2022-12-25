
#include<stdio.h>
#define size 6
struct queue
{
    int arr[size];
    int front;
    int rear;
}q;
enqueue()
{
    int n;
    if(q.front==0 && q.rear==size-1)
    {
        printf("overflow");
    }
    else if(q.front==-1 && q.rear==-1)
    {
        printf("enter the element to be insert");
        scanf("%d",&n);
        q.front=0;
        q.rear=0;
        q.arr[q.rear]=n;
    }
    else
    {
        printf("enter the element to be insert ");
        scanf("%d",&n);
        q.rear++;
        q.arr[q.rear]=n;
    }
}
display()
{
    if(q.front==-1 && q.rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        int i;
        for(i=q.front;i<=q.rear;i++)
        {
            printf("\n%d",q.arr[i]);
        }
    }
}
dequeue()
{
    if(q.front==-1 && q.rear==-1)
    {
        printf("queue is empty ");
    }
    else if(q.front==q.rear)
    {
        q.front=q.rear=-1;
    }
    else
    {
        printf("element deleted is %d",q.arr[q.front]);
        q.front++;
    }
}
main()
{
    char ans;
    int ch;
    q.front=-1;
    q.rear=-1;
    printf("want to perform operation on queue: y or n\n");
    ans=getche();
    while(ans=='y')
    {
        printf("\n1:enqueue\n2:display\n3:dequeue\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                display();
                break;
            case 3:
                dequeue();
                break;
            default:
                printf("pls enter valid choice");
                break;
        }
    }
}
