
#include<stdio.h>
main()
{
    int a[30],b[30],i,j,n,m,t,k,c[30],l;
    printf("enter number of elements of set A");
    scanf("%d",&n);
    printf("enter elements of set A");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number of elements of set B");
    scanf("%d",&m);
    printf("enter elements of set B");
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);

    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;


            }
        }
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(b[i]>b[i+1])
            {
                t=b[i];
                b[i]=b[i+1];
                b[i+1]=t;


            }
        }
    }
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    k=i;
    for(j=0;j<m;j++)
    {
        if(b[j]!=c[j])
        {
           c[k]=b[j];
           k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }


}
