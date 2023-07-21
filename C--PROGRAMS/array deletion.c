#include <stdio.h>
int main()
{
int n,i;
printf("enter array size\n");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
int pos;
printf("\nenter position");
scanf("%d",&pos);
for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];
}
for(i=0;i<n-1;i++)
{
printf("%d ",a[i]);
}
return 0;
}
