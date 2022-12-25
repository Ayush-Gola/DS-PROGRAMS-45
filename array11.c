#include<stdio.h>
main()
{
    int n,m;
    printf("enter the no. of element in set b and a");
    scanf("%d%d",&n,&m);
    int a[n],b[m],l=0,d[n+m];
    printf("enter the elements of set b");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements of set a");
   for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c=1;
            }
        }
        if(c==0)
        {
           d[l++]=b[i];
        }

    }
    for(int i=0;i<l;i++)
    {
        printf("%d \t",d[i]);
    }
}

