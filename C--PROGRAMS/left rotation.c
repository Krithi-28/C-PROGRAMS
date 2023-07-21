#include <stdio.h>
int main()
{
int n,i,first,j;
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
int rot;
printf("enter no of rotation");
scanf("%d",&rot);
for(i=0;i<rot;i++)
{
first=a[0];
for(j=0;j<n-1;j++)
{
    a[j]=a[j+1];
}
a[n-1]=first;
}
printf("\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
