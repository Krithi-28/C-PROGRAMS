#include <stdio.h>
int main()
{
int i,j,k,n;
int temp;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    temp=i;
for(j=1;j<=i;j++)
{
printf("%d",j);
}
for(k>i;k<=n-1;k++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d",temp);
temp--;
}
printf("\n");
}
return 0;
}
