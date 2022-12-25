#include<stdio.h>
main()
{
int n1,n2;
printf("enter the no. of element in set a and b");
scanf("%d%d",&n1,&n2);
int a[n1],b[n2],l=0,d[n1+n2];
printf("enter the elements of set a");
for(int i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements of set b");
for(int i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
for(int i=0;i<n1;i++)
{
int c=0;
for(int j=0;j<n2;j++)
{
if(a[i]==b[j])
{
c=1;
}
}
if(c==0)
{
d[l++]=a[i];
}
}
for(int i=0;i<l;i++)
{
printf("%d \t",d[i]);
}
}

