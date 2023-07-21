#include <stdio.h>
int main()
{
int n,i,last,j;
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
printf("\nenter no of rotation");
scanf("%d",&rot);
for(i=1;i<=rot;i++)
{
last=a[n-1];
for(j=n-1;j>=0;j--)
{
    a[j+1]=a[j];
}
a[0]=last;
}
printf("\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
