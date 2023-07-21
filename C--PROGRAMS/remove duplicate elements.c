#include <stdio.h>
int main()
{
int n,i,count,j;
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
printf("\n");
for(i=0;i<n;i++)
{
    count=0;
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
    a[i]=0;
count++;
}
}
if(count==0)
{
    printf("%d ",a[i]);
}
}
printf("\n");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

return 0;
}
