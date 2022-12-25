#include<stdio.h>
#define size 5
struct stack
{
    int arr[size];
    int top;
}s;
int push()
{
    if(s.top==size-1)
    {
        printf("stack is full");
    }
    else
    {
        int ele;
        printf("enter the element you want to insert into stack");
        scanf("%d",&ele);
        s.top++;
        s.arr[s.top]=ele;
    }
    return s.top;
}
int pop()
{
    if(s.top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("the element pop is %d",s.arr[s.top]);
        s.top--;
    }
    return s.top;

}
void display()
{
    if(s.top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        int i;
        for(i=s.top;i>=0;i--)
        {
            printf("\n%d",s.arr[i]);
        }
    }

}

void main()
{
    int ch;
    char ans;
    s.top=-1;
    printf("want to perform operation on stack : y or n");
    ans=getche();
    while(ans=='y')
    {
        printf("\n1:push\n2:pop\n3:display\n");
        printf("enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                s.top=push();
                break;
            case 2:
                s.top=pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("enter valid choice");
                break;

        }
        printf("\nwant to perform more operation ");
        ans=getche();
    }

}

