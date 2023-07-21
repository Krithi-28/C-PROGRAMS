#include<stdio.h>
#include<math.h>
int main()
{
int num,n,rem,res=0,count=0;
scanf("%d",&num);
n=num;
while(n>0)
{
n=n/10;
++count;
}
n=num;
while(n>0)
{
rem=n%10;
res=res+pow(rem,count);
n=n/10;
}
printf("%d\n",res);
if(res==num)
{
printf("the given number %d is an armstrong number",num);
}
else{
    printf("the given number %d is not an armstrong number",num);
}
return 0;
}
