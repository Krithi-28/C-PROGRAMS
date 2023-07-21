#include <stdio.h>
int main()
{
int num,n,mod,i,fact,sum=0;
scanf("%d",&num);
n=num;
if(num==0)
{
    printf("0 is not a strong number");
    return 0;
}
while(n>0)
{
mod=n%10;
fact=1;
for(i=1;i<=mod;i++)
{
fact=fact*i;
}
sum=sum+fact;
n=n/10;
}
printf("%d\n",sum);
if(num==sum)
{
printf("%d is a strong number",sum,num);
}
else
{
printf("the given number %d is not a strong number",num);
}
return 0;
}
