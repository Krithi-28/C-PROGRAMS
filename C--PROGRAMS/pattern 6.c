#include<stdio.h>
int main()
{
int i,j,k,n,temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
temp=i;
for(k=1;k<=n-i;k++)
{
printf(" ");
}
for(j=1;j<i;j++)
{
printf("%d",temp);
temp--;
}
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
temp=i;
for(k=1;k<=n-i;k++)
{
printf(" ");
}
for(j=1;j<i;j++)
{
printf("%d",temp);
temp--;
}
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}
